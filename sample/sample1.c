#include <pthread.h>

/* link with -lpthread */
#define A 10

int
main(int   argc, char *argv[])

{
	pthread_mutex_t exitMutex_st;//=PTHREAD_MUTEX_INITIALIZER;
	pthread_cond_t g_exitCond_st;// = PTHREAD_COND_INITIALIZER;
	/***one line comment */
	/* two line comment
	 */

	pthread_cond_init(&g_exitCond_st, NULL);
	pthread_mutex_init(&exitMutex_st, NULL);

	pthread_cond_wait(&g_exitCond_st, &exitMutex_st);

	return 0;

}int fn2(const unsigned int a[ A ])
{
		switch (a)
		{
			case 1:
				/* this is case 1 */
				break;
			case 2:
				/* this is case 2 */
				break;
			default:
				break;
		}
		return 1;
}
