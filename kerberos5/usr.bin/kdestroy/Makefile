# $FreeBSD: 23e90237c658539aa8586a94feaa469b1f5363a3 $

PROG=	kdestroy
CFLAGS+=-I${KRB5DIR}/lib/roken
LIBADD=	kafs5 krb5 roken vers
MAN=	kdestroy.1

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kuser
