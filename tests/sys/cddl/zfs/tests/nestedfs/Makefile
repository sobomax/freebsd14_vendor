# $FreeBSD: 071316e20f541f44631ada9246e3557afe3a31f4 $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/nestedfs
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	nestedfs_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	nestedfs.cfg
${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	nestedfs_001_pos.ksh
${PACKAGE}FILES+=	cleanup.ksh

.include <bsd.test.mk>
