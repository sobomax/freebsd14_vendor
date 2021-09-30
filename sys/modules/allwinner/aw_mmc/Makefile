# $FreeBSD: 5421b4fc7d6642a5f147553ad3e275d66c72e340 $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_mmc
SRCS=	aw_mmc.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h

.include <bsd.kmod.mk>
