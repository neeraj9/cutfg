#!/usr/bin/perl

use XML::TreeBuilder;
use Data::Dumper;

  foreach my $file_name (@ARGV) {
    my $tree = XML::TreeBuilder->new; # empty tree
    $tree->parse_file($file_name);
   # print "Hey, here's a dump of the parse tree of $file_name:\n";
   # $tree->dump; # a method we inherit from XML::Element
   # print "And here it is, bizarrely rerendered as XML:\n",
   #   $tree->as_XML, "\n";
	 @children = $tree->content_list;
	 print "-----\n";
	 #print @children[1]->content_list;
	 #$vartype = ref @children;
	 # print $vartype;
	 #print Dumper($tree);
	 #&testTree($tree);
	 &walkTree($tree);
	 print "-----\n";
    
    # Now that we're done with it, we must destroy it.
    $tree = $tree->delete;
  }

sub walkTree {
	local ($tree);
	local ($varType);
	my ($tree) = @_;

	print "depth=";
	print $tree->depth();
	print "\n";
	@descendents = $tree->descendants();
	print "[";
	print scalar @descendents;
	print "]\n";
	foreach $elt (@descendents)
	{
		print "[";
		print $elt->tag();
		print "======>";
		print $elt->content_list;
		print "<======";
		print "]\n";
	}
	# find_by_tag_name will search in present element
	# or under the present element and will return a list
	@tags = $tree->find_by_tag_name('name');
	if (@tags)
	{
		print "found name....!\n";
		print "name=";
		print $tags[0]->as_text();
		# or
		# print $tags[0]->content_list();
		# content_list and as_text returns the same result when
		# $tags[0] does not contain any more tags inside but has a scalar
		# content
		print "\n";
	}
	#@tags_test = $tree->find_by_tag_name('test');
	print "[";
	# $tree->content is an ARRAY
	print ref $tree->content;
	print ",";
	# $tree->content_list is a list (ref will say '' in this case)
	print ref $tree->content_list;
	print "]\n";

	print "size =";
	print $#{$tree->content};
	print " ";
	print scalar @{$tree->content};
	print ", Arrays 0th element is=[";
	print ${$tree->content}[0];
	print "] or it is =[";
	print $tree->content->[0];
	print "]\n";
	
	@tags = $tree->find_by_tag_name('name');
	print $#tags; # number of elements in list "tags"
	print "[";
	print @tags;
	print "]\n";
	# Or use the code below
	print "\n";
	foreach $tag ($tree->find_by_tag_name('name'))
	{
		print "[";
		print $tag;
		print "]";
	}
	print "\n";
	
}


sub testTree {
	local ($tree);
	local ($varType);
	my ($tree) = @_;
	print "ref \$tree=[";
	print ref $tree;
	print "]\n";
	print "ref \"string\"=[";
	print ref "this is a string";
	print "]\n";
	$varType = ref "this is a string";
	if ($varType)
	{
		print "ref of \"string\" is defined\n";
	}
	else
	{
		print "ref of \"string\" is not defined\n";
	}
	# foreach $element (
}
