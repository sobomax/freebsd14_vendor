# $FreeBSD: 2dcca81826c77b8b29eec094ab3173627b6e2a70 $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/compression
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	compression_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	compress_004_pos.ksh
${PACKAGE}FILES+=	compress_001_pos.ksh
${PACKAGE}FILES+=	compress_003_pos.ksh
${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	compress.cfg
${PACKAGE}FILES+=	cleanup.ksh

.include <bsd.test.mk>
