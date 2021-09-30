# $FreeBSD: d24cba093e67c49a347e3383c24e56b08e8e27d9 $

.include <src.opts.mk>

TAP_TESTS_C=	grp_test

.if ${MK_CASPER} != "no"
LIBADD+=	casper
LIBADD+=	cap_grp
CFLAGS+=-DWITH_CASPER
.endif
LIBADD+=	nv

.include <bsd.test.mk>
