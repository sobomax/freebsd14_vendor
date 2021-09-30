# $FreeBSD: 434c5532b63ebd6d22aa3f8b86556bed8d5a360e $

.include <src.opts.mk>

TESTSDIR=		${TESTSBASE}/sys/netpfil

.if ${MK_PF} != "no"
TESTS_SUBDIRS+=		pf
.endif

.include <bsd.test.mk>
