#!/usr/bin/perl
#
#

$_ = "abcdgi";

if (/(ab(cd|ef)((gi)|j))/) {
	print "string=$_\n";
	print "match rule=/(ab(cd|ef)((gi)|j))/\n";
	print "\$1:\$2:\$3:\$4\n";
	print "$1:$2:$3:$4\n";
	foreach $expr (1..$#-) {
	# works for perl 5.6.0+ only
			print "Match $expr: '${$expr}' at position ($-[$expr],$+[$expr])\n";
	}  
}

# new
$x =~ /the/;  # $` = '', $& = 'the', $' = ' cat caught the mouse'  
$x =~ /cat/;  # $` = 'the ', $& = 'cat', $' = ' caught the mouse'
# It is important to note that using $` and $' slows down regexp matching quite a bit, and  $&  slows it down to a lesser extent, because if they are used in one regexp in a program, they are generated for <all> regexps in the program. So if raw performance is a goal of your application, they should be avoided. If you need them, use @- and @+ instead
#   $` is the same as substr( $x, 0, $-[0] )
#   $& is the same as substr( $x, $-[0], $+[0]-$-[0] )
#   $' is the same as substr( $x, $+[0] )  
$pre = substr($x, 0, $-[0]);
$curr = substr($x, $-[0], $+[0]-$-[0]); 
$post = substr($x, $+[0]);
print "pre=[$pre]\ncurr=[$curr]\npost=[$post]\n";
