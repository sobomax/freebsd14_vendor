# $FreeBSD: 29d2907aed063acbac54567ceb674466ce76df7a $

.PATH: ${SRCTOP}/sys/dev/random

KMOD=	armv8_rng
SRCS=	armv8rng.c
SRCS+=	bus_if.h device_if.h

CFLAGS+= -I${SRCTOP}/sys

.include <bsd.kmod.mk>
