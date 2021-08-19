# $FreeBSD: 90f80207ef63fa0927ca4f63229c9cd6ce6f8efa $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/cli_user/zpool_iostat
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	zpool_iostat_test
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	zpool_iostat.cfg
${PACKAGE}FILES+=	zpool_iostat_003_neg.ksh
${PACKAGE}FILES+=	zpool_iostat_002_pos.ksh
${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	zpool_iostat_001_neg.ksh

.include <bsd.test.mk>
