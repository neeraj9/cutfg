#!/usr/bin/perl

use XML::Parser;
  
#$p1 = new XML::Parser(Style => 'Debug');
#$p1->parsefile('test_sample.xml');

  $p2 = new XML::Parser(Handlers => {Start => \&handle_start,
                                     End   => \&handle_end,
                                     Char  => \&handle_char});
$p2->parsefile('test_sample.xml');


sub handle_start {
	print "handle_start [@_]\n";
}
sub handle_end {
	print "handle_end [@_]\n";
}
sub handle_char {
	print "handle_char [@_]\n";
}
