#!/usr/bin/perl


while ($srcfile = shift(@ARGV)) {

  open( FILE, $srcfile ) || die "Can't open file $srcfile\n";
  print STDERR "Reading \"$srcfile\"\n";
  
  $_ = '';
  
    while (&rdln) {
      $linenumber++; 
		#print "$_";
		print "Before=$_";
		#s|//.*||; # Eat comments
		&stripComment;
		print "After =$_";
		#print "$_";
		$_ = '';
	} 
}

exit;

# ---------- subroutine --------------------------------------------------

# Read a line of input, and remove blank lines and preprocessor directives.
sub rdln {
  my ($skip_next_line) = 0;
  if (defined ($_)) {
    my ($previous_line) = $_;
    while ( (/^(\s*|\#.*)$/ || $skip_next_line ) && ($_ = <FILE>)) {
      if ($previous_line =~ m/\\\s*/) { $skip_next_line = 1; }
      else { $skip_next_line = 0; }
      $previous_line = $_;
      $linenumber++; 
			
      if ($debug) {
				print STDERR "(0:$srcfile) $linenumber. --> "; 
				print STDERR "<st>$_</st>\n";
			} 
    }
  }
  if (defined ($_))
  {
  	return 1;
  }
  else
  {
  	return 0;
  }
}

# NOTE that the special C++ and special C comments
# are not needed because these are adding an additional
# functionality of writing doc inside C/C++ comments
sub stripComment {
  if (s|//\*\s+||) {
    # Special C++ comment
	# The use of special comment are to enable having doc in 
	# comments so for ex. doxygen/scandoc
    # &handleCommentLine( $' );
	print "special C++ comment\n";
    #$_ = ''; &rdln;
  }	
  elsif (s|//.*||) { 
		#s|//.*||; # Eat comments
    # Ordinary C++ comment
	print "Ordinary C++ comment\n";
    #$_ = '';
    #&rdln;
  }
  elsif (s|\/\*\*\s+||) {
    # Special C comments
	print "special C comment\n";
    
    s/\={3,}|\-{3,}|\*{3,}//;			# Eliminate banner strips
    $text = '';
    
    # Special comment
    while (!/\*\//)
	{ 
	# The use of special comment are to enable having doc in 
	# comments so for ex. doxygen/scandoc
		#&handleCommentLine( $_ );
		$text .= $_; 
		$_ = <FILE>; 
		$linenumber++;
		if ($debug)
		{
			print STDERR "(1) $linenumber\n."; 
		}
	}
    s/\={3,}|\-{3,}|\*{3,}//;			# Eliminate banner strips
    /\*\//;
	# The use of special comment are to enable having doc in 
	# comments so for ex. doxygen/scandoc
    #&handleCommentLine( $` );
    $text.= $`; $_ = $';
  }
  elsif (s|\/\*||) {
    # Ordinary C comment
	print "Ordinary C comment\n";
    $text = "";
    
    while (!/\*\//)
	{
		$text .= $_;
		$_ = <FILE>;
		$linenumber++;
		if ($debug)
		{
			print STDERR "(2) $linenumber\n.";
		}
	}
    /\*\//;
    $text.= $`;
	# $` contains everything from the beginning till just before
	# the pattern matched (this will slow down parsing, use $-[0],etc
	# instead - see perldoc->regex tut
	#print "\$`=$`\n";
	
	# $text contains everything inside comments
	#print "\$text=$text\n";
	$_ = $';
  }
}


# Non recursive impementaion of block extraction.
# A block is anything between '{' and '}'
# Note that braces can be nested :)
sub extractBlock {

	 $block = '';
	 #&rdln; # it automatically skips over blank lines and # (preprocessor cmds)
	 #print "<>$_</>";
	 if (/\{/)
	 {
		my ($block); # function implementation block
		$block = "";
		$notDone = 1;
		$braceLevel = 0;

		# read the entire { ... } ... block in $block
		while ($notDone > 0){
			$block = $block . $_;
			$_ =~ s/\n//g; # strip the newline char; although not needed
			# print "before- [$_]\n";
			&stripComment;
			# print "after- [$_]\n";
			#print "outerloop: ";
			while (/[\}\{]/){
				if (/\}/){
					# print "$_\n";
					$closeBracePos = $-[0];
					# print "close = $closeBracePos\n";
					if (/\{/){
						#print "$_ :";
						#print "neeraj\n";
						$openBracePos = $-[0];
						# print "open = $openBracePos\n";
						# print "depth = $braceLevel\n";
						if ($closeBracePos < $openBracePos)
						{
							if ($braceLevel > 1)
							{
								$_ =~ s/\}//; # stip it
								$_ =~ s/\{//; # stip it
								# no need to touch $braceLevel because
								# both { and } are present
							}
							else
							{
								$notDone = 0;
							}
						}
						else
						{
							# if '{' is also present in the same line but
							# comes before '}' so that another depth/level
							# is added in the braces
							$_ =~ s/\}//; # stip it
							$_ =~ s/\{//; # stip it
							$braceLevel++;
						}
					}
					else
					{
						# if '{' is not present then check the
						# braceLevel and match the nested '{' if so
						# otherwise the work is done
						$_ =~ s/\}//; # stip it
						#print "$braceLevel";
						if ($braceLevel > 1)
						{
							$braceLevel--;
						}
						else
						{
							# when all the braces are matched then
							# $braceLevel =~ 1
							$braceLevel--;
							# now it is 0
						  #print "at last\n";
							$notDone = 0;
						}
					}
				}
				else{
					# if '}' is not present then 
					# match is not complete
					# so carry on....
					#print "NEERAJ\n";
					if (/\{/){
						#$openBracePos = $-[0];
						#print "open = $openBracePos\n";
						#print "depth = $braceLevel\n";
						#print "\[$_\]\n";
						$_ =~ s/\{//; # stip it
						$braceLevel++;
					}
				}
				#print "\[$_\]\n";
			} # End of while (/[\}\{]/) - ie. no more '{' or '}'
			# are present in this line
			if ($notDone > 0)
			{
				$_ = ""; # dont forget to do this ;)
				&rdln;
				#print "$_";
			}
			#print "depth = $braceLevel\n";
		} # End of while($notDone > 0) - ie. still searching for the closing
		# brace, which marks the end of the current block
		# We had such a big loop because braces can be nested ;)
		print "Block extracted\n";
		#print "<block>$block</block>\n";

	} # End of if (/\{/)
	return $block;
}
