Cutfg: C Unit Test Framework Generation
=========================================

The purpose of the project is to generate a c unit test framework automatically from a c implementation. The project also aims at providing an XML based unit test cases building thereby providing an abstraction over a specific unit test framework (and also a documentation engine). This technique can be utilized to include languages other than C also.

Because of my busy schedule i am unable to write proper documentation. You will find detailed documentation in docs/ directory whenever i have time.
If you want to know more about this project then try executing the scripts on the sample codes provided in sample/ directory.

Example run.
---------------

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
