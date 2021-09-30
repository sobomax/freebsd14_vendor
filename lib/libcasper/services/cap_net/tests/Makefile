# $FreeBSD: 915a2dd35463fb345302902be5069e2c014cca9a $

.include <src.opts.mk>

ATF_TESTS_C=	net_test

.if ${MK_CASPER} != "no"
LIBADD+=	casper
LIBADD+=	cap_net
CFLAGS+=-DWITH_CASPER
.endif
LIBADD+=	nv

WARNS?=		3

.include <bsd.test.mk>
