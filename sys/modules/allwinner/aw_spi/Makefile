# $FreeBSD: af49f87fa1970a5ea01f49a7c68fcb38496ccfe8 $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_spi
SRCS=	aw_spi.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \
	spibus_if.h \

.include <bsd.kmod.mk>
