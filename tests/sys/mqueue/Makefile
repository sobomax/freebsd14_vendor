# $FreeBSD: 861694e0b35354ea9114378aed4412b6927c5845 $

TESTSDIR=	${TESTSBASE}/sys/mqueue

ATF_TESTS_SH=	mqueue_test

BINDIR=		${TESTSDIR}

CFLAGS+=	-I${SRCTOP}/tests

PROGS+=		mqtest1
PROGS+=		mqtest2
PROGS+=		mqtest3
PROGS+=		mqtest4
PROGS+=		mqtest5

LIBADD+=	rt

.include <bsd.test.mk>
