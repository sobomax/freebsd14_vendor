# $FreeBSD: e992479ff20e2c0ea2ecb3745b9ae5e8f1218efd $

.include <src.opts.mk>

PACKAGE=tests
TESTSDIR=${TESTSBASE}/sys/cddl/zfs/tests/cli_user
FILESDIR=${TESTSDIR}

${PACKAGE}FILES+=	setup.ksh
${PACKAGE}FILES+=	cleanup.ksh
${PACKAGE}FILES+=	cli.cfg
${PACKAGE}FILES+=	cli_user.kshlib

TESTS_SUBDIRS+=	zpool_iostat
TESTS_SUBDIRS+=	zpool_list
TESTS_SUBDIRS+=	zfs_list
TESTS_SUBDIRS+=	misc

.include <bsd.test.mk>
