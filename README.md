Cutfg: C Unit Test Framework Generation
=========================================

The purpose of the project is to generate a C unit test framework automatically from a C implementation. The project also aims at providing an XML based unit test cases building thereby providing an abstraction over a specific unit test framework (and also a documentation engine). This technique can be utilized to include languages other than C also.

There is not much of documentation at present and all that is exists in this
file. If you want to know more about this project then try executing the
scripts on the sample codes provided in sample/ directory.

> The project was initially hosted at sourceforge:
> <http://cutfg.sourceforge.net> but now moved to github
> <https://github.com/neeraj9/cutfg>.

Dependencies
--------------

The following softwares are used in one way or another:

1. Perl XML::TreeBuilder module - This is used when generating C code from XML.
2. [Check](http://check.sourceforge.net) unit test frame work for C - At
   present this is the only unit test framework supported.
3. [ROBODoc]() - The documentation framework used in the generated test suite
   is ROBODoc.

TODO
------

1. Support doxygen documentation in addition to robodoc in the generated test
   code. I will eventually discontinue ROBODoc because its not very active
   and doxygen is pretty solid so far.
2. Support CUnit
3. Autounit (GNU)
4. Possibly rewrite in python


Sample Run
------------

    ./genXml sample/sample1.c
    ### test_sample.xml is generated.
    ./genCcode test_sample1.xml
    ### test_sample1.c is generated.
    ### test_sample1.h is generated.


How to install perl module
----------------------------------

Install perl module on Linux
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    perl -MCPAN -e 'install "TreeBuilder"'


Install perl module on Mac OS X
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    sudo CPAN
    # answer a tons of questions if you are running it for the first time
    install XML::TreeBuilder
    # after a long time (if you are installing your first module on Mac)
    # the module is built and installed
    # Note: the default build location, cache is in ~/.cpan/
