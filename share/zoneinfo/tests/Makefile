# $FreeBSD: 924da5c3a44e385dc08c2e2a2938ba18cb270aa2 $

.include <src.opts.mk>

.PATH: ${SRCTOP}/contrib/tzdata

PACKAGE=	tests

FILESGROUPS+=	TESTFILES

ATF_TESTS_SH+=	backward_test
TESTFILES+=	backward

TESTFILES+=	zoneinfo_common.sh
TESTFILESPACKAGE= ${PACKAGE}
TESTFILESDIR=	${TESTSDIR}

.include <bsd.test.mk>
