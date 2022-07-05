#	from: @(#)Makefile	5.8 (Berkeley) 7/28/90
# $FreeBSD: 1a5844390810e5cd5efa3e1a6b818ccbaa8c1e37 $

PACKAGE=	yp
PROG=	ypbind
MAN=	ypbind.8
SRCS=	ypbind.c yp_ping.c

CFLAGS+= -DDAEMON

WARNS?=	2

.include <bsd.prog.mk>
