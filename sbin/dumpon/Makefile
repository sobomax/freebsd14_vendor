# $FreeBSD: d0700ab16a8921bc990c71d93bf09878e4c30568 $

.include <src.opts.mk>

PACKAGE=runtime
PROG=	dumpon

.if ${MK_OPENSSL} != "no"
LIBADD=	crypto
CFLAGS+=-DHAVE_CRYPTO
.endif

MAN=	dumpon.8

.include <bsd.prog.mk>
