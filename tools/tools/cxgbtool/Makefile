# $FreeBSD: 5aa08f12196104eed98c96ede54c0724a03e8301 $

PROG=	cxgbtool
SRCS=	cxgbtool.c
MAN=
CFLAGS+= -I${.CURDIR}/../../../sys/dev/cxgb -I.
CFLAGS+= -DCONFIG_T3_REGS -DCHELSIO_INTERNAL
BINDIR?= /usr/sbin

.include <bsd.prog.mk>
