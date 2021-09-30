# $FreeBSD: 1ac7a8aa9d8a2a9d8be0aceadf2097d8f7cb35e1 $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/refreserv
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	refreserv_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	refreserv_004_pos.ksh
${PACKAGE}FILES+=	refreserv_005_pos.ksh
${PACKAGE}FILES+=	refreserv_001_pos.ksh
${PACKAGE}FILES+=	refreserv_003_pos.ksh
${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	refreserv.cfg
${PACKAGE}FILES+=	refreserv_002_pos.ksh

.include <bsd.test.mk>
