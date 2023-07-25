# $FreeBSD: 869b71209c4d1edc47a31adfafd93e2599a39c94 $

TESTSDIR=	${TESTSBASE}/sys/kqueue/libkqueue
BINDIR=		${TESTSDIR}

# libkqueue and test suite by Mark Heily <mark@heily.com>
PLAIN_TESTS_C=	kqueue_test

SRCS.kqueue_test=	\
	main.c		\
	read.c		\
	timer.c		\
	vnode.c		\
	proc.c		\
	signal.c	\
	user.c

.include <bsd.test.mk>
