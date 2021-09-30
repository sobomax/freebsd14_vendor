# $FreeBSD: ed2d2c4fbe2e1f31375825089fe56c032b89206f $

TESTSDIR=	${TESTSBASE}/sys/file

BINDIR=		${TESTSDIR}

TAP_TESTS_C+=	closefrom_test
TAP_TESTS_C+=	dup_test
TAP_TESTS_C+=	fcntlflags_test
TAP_TESTS_SH+=	flock_test
PLAIN_TESTS_C+=	ftruncate_test
PLAIN_TESTS_C+=	newfileops_on_fork_test

PROGS+=		flock_helper

LIBADD.closefrom_test=	util

LIBADD.flock_helper=	pthread

LIBADD.newfileops_on_fork_test=	pthread

.include <bsd.test.mk>
