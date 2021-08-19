# $FreeBSD: 8cb5e128de1607956ec9a5da3a9d4a2cec6f9fee $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/zvol/zvol_ENOSPC
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	zvol_ENOSPC_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	zvol_ENOSPC_001_pos.ksh
${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	zvol_ENOSPC.cfg
${PACKAGE}FILES+=	cleanup.ksh

.include <bsd.test.mk>
