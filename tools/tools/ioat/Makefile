# $FreeBSD: 7db23b941997e10a9432d33353256025e08c2b35 $

PROG=	ioatcontrol
MAN=	ioatcontrol.8
BINDIR?=	/usr/bin

CFLAGS+=	-I${SRCTOP}/sys/dev/ioat

LIBADD=	util

WARNS?=	6

.include <bsd.prog.mk>
