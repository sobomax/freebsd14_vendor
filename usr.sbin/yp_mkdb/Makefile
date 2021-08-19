# $FreeBSD: 681087e01d2cbdefec2ae1adaae172c443b3286e $

.PATH: ${SRCTOP}/libexec/ypxfr ${SRCTOP}/usr.sbin/ypserv

PROG=	yp_mkdb
MAN=	yp_mkdb.8
SRCS=	yp_mkdb.c yp_dblookup.c yp_dbwrite.c

CFLAGS+= -Dyp_error=warnx
CFLAGS+= -I${SRCTOP}/libexec/ypxfr -I${SRCTOP}/usr.sbin/ypserv

WARNS?=	1

.include <bsd.prog.mk>
