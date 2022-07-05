# $FreeBSD: 6ddbfdfd9b09c1dc9497b4895af03f7d07a82489 $

.PATH: ${SRCTOP}/libexec/ypxfr ${SRCTOP}/usr.sbin/ypserv

PACKAGE=	yp
PROG=	yp_mkdb
MAN=	yp_mkdb.8
SRCS=	yp_mkdb.c yp_dblookup.c yp_dbwrite.c

CFLAGS+= -Dyp_error=warnx
CFLAGS+= -I${SRCTOP}/libexec/ypxfr -I${SRCTOP}/usr.sbin/ypserv

WARNS?=	1

.include <bsd.prog.mk>
