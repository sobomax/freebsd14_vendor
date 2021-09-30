# $FreeBSD: ff2f2f18e25c8ef68b9b9878071c357b47f216a9 $

.include <src.opts.mk>

TAP_TESTS_C=	grp_test

.if ${MK_CASPER} != "no"
LIBADD+=	casper
LIBADD+=	cap_grp
CFLAGS+=-DWITH_CASPER
.endif
LIBADD+=	nv

WARNS?=		3

.include <bsd.test.mk>
