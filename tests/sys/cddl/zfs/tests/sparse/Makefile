# $FreeBSD: 73647f2c95a40862efb2cbb3a5857b685a01b502 $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/sparse
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	sparse_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	sparse_001_pos.ksh
${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	sparse.cfg
${PACKAGE}FILES+=	cleanup.ksh

.include <bsd.test.mk>
