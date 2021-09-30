# $FreeBSD: b09941dca5069984748b2dd80fdb5b0fa3620fb8 $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/threadsappend
FILESDIR=${TESTSDIR}
BINDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	threadsappend_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	threadsappend_001_pos.ksh
${PACKAGE}FILES+=	threadsappend.cfg
${PACKAGE}FILES+=	setup.ksh
PROG+=	threadsappend
LIBADD+=	pthread
MAN=

.include <bsd.test.mk>
