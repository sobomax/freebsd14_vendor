# $FreeBSD: a8dcad1636515aac0e31e0de76f4086e896e5897 $
#
.PATH:	${.CURDIR:H}/rtadvd

PROG=	rtadvctl
MAN=	rtadvctl.8

SRCS=	rtadvctl.c control.c control_client.c if.c timer_subr.c

CFLAGS+= -I${.CURDIR} -I${.CURDIR:H}/rtadvd
WARNS?=	1

.include <bsd.prog.mk>
