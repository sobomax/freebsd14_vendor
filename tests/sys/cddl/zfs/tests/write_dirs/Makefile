# $FreeBSD: d38228b7ce28ec8a0a025752f92be9405ff7b9f0 $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/write_dirs
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	write_dirs_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	write_dirs.cfg
${PACKAGE}FILES+=	write_dirs_002_pos.ksh
${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	write_dirs_001_pos.ksh

.include <bsd.test.mk>
