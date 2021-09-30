# $FreeBSD: 7f14c080a26071c9c75923404ed61b4c3a630b28 $

.PATH: ${SRCTOP}/sys/dev/random

KMOD=	rdrand_rng
SRCS=	ivy.c
SRCS+=	bus_if.h device_if.h

CFLAGS+= -I${SRCTOP}/sys

.include <bsd.kmod.mk>
