#	from: @(#)Makefile	5.8 (Berkeley) 7/28/90
# $FreeBSD: 8e9a231940c42929ae616c2be7831cb60845d870 $

PROG=	ypbind
MAN=	ypbind.8
SRCS=	ypbind.c yp_ping.c

CFLAGS+= -DDAEMON

WARNS?=	2

.include <bsd.prog.mk>
