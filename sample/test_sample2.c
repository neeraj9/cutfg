/*
 * This file is a testsuite "sample2" for testing
 * file 
 *
 * Author:
 *   Author Name (author@email.com)
 */
#include <stdlib.h>
/* Include Check unit test framework header file */
#include <check.h>
/* Include a header file for external prototypes and types */
#include "test_sample2.h"



/****f* Suite_sample2/tg_addNum_setup_checked [1.0] *
*  NAME
*    tg_addNum_setup_checked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_addNum_setup_checked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_addNum_setup_checked(void)
{
    /* write setup code here */
}
/************/

/****f* Suite_sample2/tg_addNum_teardown_checked [1.0] *
*  NAME
*    tg_addNum_teardown_checked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_addNum_teardown_checked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_addNum_teardown_checked(void)
{
    /* write teardown code here */
}
/************/

/****f* Suite_sample2/tg_addNum_setup_unchecked [1.0] *
*  NAME
*    tg_addNum_setup_unchecked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_addNum_setup_unchecked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_addNum_setup_unchecked(void)
{
    /* write setup code here */
}
/************/

/****f* Suite_sample2/tg_addNum_teardown_unchecked [1.0] *
*  NAME
*    tg_addNum_teardown_unchecked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_addNum_teardown_unchecked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_addNum_teardown_unchecked(void)
{
    /* write teardown code here */
}
/************/

/****f* Suite_sample2/test_addNum1 [1.0] *
*  NAME
*    test_addNum1 -  Write One line description 
*  SYNOPSIS
*    START_TEST(test_addNum1)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
START_TEST(test_addNum1)
{
	/* Start of variable declaration used by function
	 * under test.
	 */
	int ret;
	int a;
	int b;
	/* End of variable declaration used by function
	 * under test.
	 */
	/* Write additional declarations here */
	/* Test specific initialization goes here */
	a = 10;
	b = 10;
	/* Consider the present state  */
	/* Call the function under test.*/
	ret = addNum(a,b);
	/* Test case result analysis goes here */
	fail_unless(ret == 20,NULL);

}
END_TEST
/************/


/****f* Suite_sample2/tg_subNum_setup_checked [1.0] *
*  NAME
*    tg_subNum_setup_checked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_subNum_setup_checked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_subNum_setup_checked(void)
{
    /* write setup code here */
}
/************/

/****f* Suite_sample2/tg_subNum_teardown_checked [1.0] *
*  NAME
*    tg_subNum_teardown_checked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_subNum_teardown_checked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_subNum_teardown_checked(void)
{
    /* write teardown code here */
}
/************/

/****f* Suite_sample2/tg_subNum_setup_unchecked [1.0] *
*  NAME
*    tg_subNum_setup_unchecked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_subNum_setup_unchecked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_subNum_setup_unchecked(void)
{
    /* write setup code here */
}
/************/

/****f* Suite_sample2/tg_subNum_teardown_unchecked [1.0] *
*  NAME
*    tg_subNum_teardown_unchecked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_subNum_teardown_unchecked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_subNum_teardown_unchecked(void)
{
    /* write teardown code here */
}
/************/

/****f* Suite_sample2/test_subNum1 [1.0] *
*  NAME
*    test_subNum1 -  Write One line description 
*  SYNOPSIS
*    START_TEST(test_subNum1)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
START_TEST(test_subNum1)
{
	/* Start of variable declaration used by function
	 * under test.
	 */
	int ret;
	int a;
	int b;
	/* End of variable declaration used by function
	 * under test.
	 */
	/* Write additional declarations here */
	/* Test specific initialization goes here */
	a = 20;
	b = 10;
	/* Consider the present state  */
	/* Call the function under test.*/
	ret = subNum(a,b);
	/* Test case result analysis goes here */
	fail_unless(ret == 100,NULL);

}
END_TEST
/************/


/****f* Suite_sample2/tg_mulNum_setup_checked [1.0] *
*  NAME
*    tg_mulNum_setup_checked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_mulNum_setup_checked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_mulNum_setup_checked(void)
{
    /* write setup code here */
}
/************/

/****f* Suite_sample2/tg_mulNum_teardown_checked [1.0] *
*  NAME
*    tg_mulNum_teardown_checked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_mulNum_teardown_checked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_mulNum_teardown_checked(void)
{
    /* write teardown code here */
}
/************/

/****f* Suite_sample2/tg_mulNum_setup_unchecked [1.0] *
*  NAME
*    tg_mulNum_setup_unchecked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_mulNum_setup_unchecked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_mulNum_setup_unchecked(void)
{
    /* write setup code here */
}
/************/

/****f* Suite_sample2/tg_mulNum_teardown_unchecked [1.0] *
*  NAME
*    tg_mulNum_teardown_unchecked -  Write One line description 
*  SYNOPSIS
*    START_TEST(tg_mulNum_teardown_unchecked)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
void
tg_mulNum_teardown_unchecked(void)
{
    /* write teardown code here */
}
/************/

/****f* Suite_sample2/test_mulNum1 [1.0] *
*  NAME
*    test_mulNum1 -  Write One line description 
*  SYNOPSIS
*    START_TEST(test_mulNum1)
*  FUNCTION
*    Write multiline function of this subroutine
*  NOTES
*    Write notes here
*  BUGS
*    Write bugs here
*  SEE ALSO
*    Write SEE ALSO here
*  TODO
*    Write TODO's here
*  SOURCE
*/
START_TEST(test_mulNum1)
{
	/* Start of variable declaration used by function
	 * under test.
	 */
	int ret;
	int a;
	int b;
	/* End of variable declaration used by function
	 * under test.
	 */
	/* Write additional declarations here */
	/* Test specific initialization goes here */
	a = 10;
	b = 10;
	/* Consider the present state  */
	/* Call the function under test.*/
	ret = mulNum(a,b);
	/* Test case result analysis goes here */
	fail_unless(ret == 100,NULL);

}
END_TEST
/************/


Suite*
sample2_suite(void)
{
	/* Declare a test suite */
	Suite *s;
	/* Declare test cases (one for every function tested)  */
	TCase *tg_addNum;
	TCase *tg_subNum;
	TCase *tg_mulNum;


	/* Create a test suite sample2 */
	s = suite_create("sample2");
	/* Create test cases */
	tg_addNum = tcase_create("tg_addNum");
	tg_subNum = tcase_create("tg_subNum");
	tg_mulNum = tcase_create("tg_mulNum");
	/* Add setup and teardown to all the test cases */
	tcase_add_unchecked_fixture(tg_addNum, tg_addNum_setup_unchecked, tg_addNum_teardown_unchecked);
	tcase_add_checked_fixture(tg_addNum, tg_addNum_setup_checked, tg_addNum_teardown_checked);
	tcase_add_unchecked_fixture(tg_subNum, tg_subNum_setup_unchecked, tg_subNum_teardown_unchecked);
	tcase_add_checked_fixture(tg_subNum, tg_subNum_setup_checked, tg_subNum_teardown_checked);
	tcase_add_unchecked_fixture(tg_mulNum, tg_mulNum_setup_unchecked, tg_mulNum_teardown_unchecked);
	tcase_add_checked_fixture(tg_mulNum, tg_mulNum_setup_checked, tg_mulNum_teardown_checked);
	/* Add all the test cases to test suite sample2 */
	suite_add_tcase(s, tg_addNum);
	suite_add_tcase(s, tg_subNum);
	suite_add_tcase(s, tg_mulNum);
	/* Add tests to test cases */
	/*  */
	tcase_add_test(tg_addNum, test_addNum1);
	/*  */
	tcase_add_test(tg_subNum, test_subNum1);
	/*  */
	tcase_add_test(tg_mulNum, test_mulNum1);
	/* Done with creating and adding test, now return the
	 * pointer to the test suite
	 */
	return s;
}

int
startSuitesample2(void)
{
	int nf;
	Suite *s;
	SRunner *sr;

	s = sample2_suite();
	sr = srunner_create(s);
	 /* srunner_set_fork_status (sr, CK_NOFORK);*/
	srunner_run_all (sr, CK_NORMAL);
	nf = srunner_ntests_failed(sr);
	srunner_free(sr);
	suite_free(s);
	return (nf == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
