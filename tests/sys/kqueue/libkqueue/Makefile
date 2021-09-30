# $FreeBSD: cc29e35aa5107be07fb2a5ed38a71b01fc59aed1 $

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

.include <bsd.test.mk>
