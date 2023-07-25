# $FreeBSD: ffef575c7cd4c83b62df268b3c189933c470d5b0 $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	if_awg
SRCS=	if_awg.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	miibus_if.h \
	ofw_bus_if.h

.include <bsd.kmod.mk>
