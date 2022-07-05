#	from: @(#)Makefile	5.8 (Berkeley) 7/28/90
# $FreeBSD: ed160e20c2ad25f4ed2e07f3465df014646757da $

YPSERV=${SRCTOP}/usr.sbin/ypserv/common
.PATH: ${YPSERV}

PACKAGE=	yp
PROG=	ypwhich
SRCS=	yplib_host.c ypwhich.c

CFLAGS+=	-I${YPSERV} -I.

WARNS?=	2

.include <bsd.prog.mk>
