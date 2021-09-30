# $FreeBSD: 94d198bf99003e68e1ab89500a1d5714972bb5d5 $

TESTSDIR=	${TESTSBASE}/sys/kqueue/libkqueue
BINDIR=		${TESTSDIR}

# libkqueue and test suite by Mark Heily <mark@heily.com>
TAP_TESTS_SH=	kqueue_test

PROGS=	kqtest

SRCS.kqtest=		\
	main.c		\
	read.c		\
	timer.c		\
	vnode.c		\
	proc.c		\
	signal.c	\
	user.c
WARNS?=	2

.include <bsd.test.mk>
