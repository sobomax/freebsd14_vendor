# $FreeBSD: cc1e4d6a031e56ece6bdda9d2af10ce41b39d6da $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/mmap
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	mmap_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	mmap.cfg
${PACKAGE}FILES+=	mmap_read_001_pos.ksh
${PACKAGE}FILES+=	mmap_write_001_pos.ksh
${PACKAGE}FILES+=	setup.ksh

.include <bsd.test.mk>
