# $FreeBSD: f6ae6d27975b6e79476ed1c48de79a7fbd0e3eff $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/inuse
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	inuse_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	inuse.cfg
${PACKAGE}FILES+=	inuse_005_pos.ksh
${PACKAGE}FILES+=	inuse_010_neg.ksh
${PACKAGE}FILES+=	setup.ksh

.include <bsd.test.mk>
