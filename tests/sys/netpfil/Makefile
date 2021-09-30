# $FreeBSD: b6c90f2b3c86a21a8c4d0972983c07db66e01aff $

.include <src.opts.mk>

TESTSDIR=		${TESTSBASE}/sys/netpfil

.if ${MK_PF} != "no"
TESTS_SUBDIRS+=		pf \
					common
.endif

.include <bsd.test.mk>
