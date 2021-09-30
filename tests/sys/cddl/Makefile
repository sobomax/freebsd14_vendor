# $FreeBSD: f326602b77c0d11fc370c99d340081caa9b06256 $

.include <src.opts.mk>

TESTSDIR=	${TESTSBASE}/sys/cddl

TESTS_SUBDIRS+=	${_zfs}

.if ${MK_ZFS} != "no"
_zfs=	zfs
.endif

.include <bsd.test.mk>
