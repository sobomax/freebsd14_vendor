# $FreeBSD: f79e872049d117aa0a26115ad7cccc98791d9090 $

.include <src.opts.mk>

TAP_TESTS_C=	dns_test

.if ${MK_CASPER} != "no"
LIBADD+=	casper
LIBADD+=	cap_dns
CFLAGS+=-DWITH_CASPER
.endif
LIBADD+=	nv

.include <bsd.test.mk>
