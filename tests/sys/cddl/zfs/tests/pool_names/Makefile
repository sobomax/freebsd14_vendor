# $FreeBSD: 82969777d3d827a1b8cd28744ef81142d4bad6db $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/pool_names
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	pool_names_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	pool_names_002_neg.ksh
${PACKAGE}FILES+=	pool_names.cfg
${PACKAGE}FILES+=	pool_names_001_pos.ksh

.include <bsd.test.mk>
