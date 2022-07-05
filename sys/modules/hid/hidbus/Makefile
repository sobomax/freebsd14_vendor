# $FreeBSD: c2a452e1e9f283764afd2485123f070979a70d4b $

.PATH: ${SRCTOP}/sys/dev/hid

KMOD=	hidbus
SRCS=	hidbus.c
SRCS+=	bus_if.h device_if.h hid_if.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
