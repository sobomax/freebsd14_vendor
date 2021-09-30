# $FreeBSD: 55c163bbdb408fa9f1e563d045e0d6dc5f045aa3 $

.include <src.opts.mk>

TAP_TESTS_C=	dns_test

.if ${MK_CASPER} != "no"
LIBADD+=	casper
LIBADD+=	cap_dns
CFLAGS+=-DWITH_CASPER
.endif
LIBADD+=	nv

WARNS?=		3

.include <bsd.test.mk>
