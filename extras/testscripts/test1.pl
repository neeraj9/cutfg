#!/usr/bin/perl
#
#

my ($new);

$_ = "Hello\n\tWorld";
if (/s/){
	print "----\n";
	print "[$_]\nmatches /s/\n";
	print "----\n";
}

if (/\s/){
	print "----\n";
	print "\[$_\]\nmatches /\\s/\n";
	print "----\n";
}
