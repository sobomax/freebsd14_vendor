# $FreeBSD: ec0b356df3266285a7cd39af41f6398d544efe46 $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/ctime
FILESDIR=${TESTSDIR}
BINDIR=${TESTSDIR}

${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	ctime.cfg

PROG=	ctime_001_pos
MAN=
ATF_TESTS_KSH93=	ctime_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

.include <bsd.test.mk>
