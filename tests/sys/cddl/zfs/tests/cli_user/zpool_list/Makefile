# $FreeBSD: c43dc562d1ec1525210ed933fef656e00afbf1ae $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/cli_user/zpool_list
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	zpool_list_test
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	zpool_list_001_pos.ksh
${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	zpool_list.cfg
${PACKAGE}FILES+=	zpool_list_002_neg.ksh

.include <bsd.test.mk>
