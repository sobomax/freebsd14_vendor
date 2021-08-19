/* $FreeBSD: 15abc20d1fea6c640bf798f89e82210b9322e597 $ */
/* try to catch thread exiting, and rethrow the exception */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int caught;

void *
thr_routine(void *arg)
{
	try {
		pthread_exit(NULL);
	} catch (...) {
		caught = 1;
		printf("thread exiting exception caught\n");
		/* rethrow */
		throw;
	}
}

int
main()
{
	pthread_t td;

	pthread_create(&td, NULL, thr_routine, NULL);
	pthread_join(td, NULL);
	if (caught)
		printf("OK\n");
	else
		printf("failure\n");
	return (0);
}
