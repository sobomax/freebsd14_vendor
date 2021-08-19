# $FreeBSD: 091c707550a346a96d7c2d31ce74e436b70348be $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/cli_root/zdb
FILESDIR=${TESTSDIR}

ATF_TESTS_KSH93+=	zdb_test
TEST_METADATA+=		required_user="root"
TEST_METADATA+=		is_exclusive=true

${PACKAGE}FILES+=	zdb_001_neg.ksh
${PACKAGE}FILES+=	zdb.cfg
${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	setup.ksh

.include <bsd.test.mk>
