# $FreeBSD: 515fe383b971a2e0acd0c29722037069556b9077 $

.include <src.opts.mk>

TAP_TESTS_C=	pwd_test

.if ${MK_CASPER} != "no"
LIBADD+=	casper
LIBADD+=	cap_pwd
CFLAGS+=-DWITH_CASPER
.endif
LIBADD+=	nv

.include <bsd.test.mk>
