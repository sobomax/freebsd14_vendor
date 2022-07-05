# $FreeBSD: a286f658e4dd1a61fad41bb9f75e5fb770428ba9 $

PACKAGE=	kerberos

PROG=	ksu
.if defined(ENABLE_SUID_K5SU)
BINMODE=4555
PRECIOUSPROG=
.endif
MAN=
SRCS=	su.c
CFLAGS+=-I${KRB5DIR}/lib/roken
LIBADD=	kafs5 krb5 roken vers crypto crypt

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/appl/su
