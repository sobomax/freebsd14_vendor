# $FreeBSD: 2fb608d2f41063a7e7f52241f57dcad9740bd638 $

PROG=	cxgbtool
SRCS=	cxgbtool.c
MAN=
CFLAGS+= -I${.CURDIR}/../../../sys/dev/cxgb -I.
CFLAGS+= -DCONFIG_T3_REGS -DCHELSIO_INTERNAL
BINDIR?= /usr/sbin
WARNS?= 3

.include <bsd.prog.mk>
