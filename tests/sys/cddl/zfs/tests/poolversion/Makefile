# $FreeBSD: 06adc458cd351069368e6f48bb17ecf39830d511 $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/poolversion
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	poolversion_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	poolversion_002_pos.ksh
${PACKAGE}FILES+=	poolversion_001_pos.ksh
${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	setup.ksh

.include <bsd.test.mk>
