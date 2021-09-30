/* $FreeBSD: 182c194b07af925ca9e575847ca9310dff7875d4 $ */
/* check unwinding for main thread */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#include "Test.cpp"

int
main()
{
	Test test;

	atexit(check_destruct);
	pthread_exit((void *)1);
	return (0);
}
