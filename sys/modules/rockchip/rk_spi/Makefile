# $FreeBSD: f93be8d9a6b3c296aef00d57681fab8f0efd5194 $

.PATH: ${SRCTOP}/sys/arm64/rockchip

KMOD=	rk_spi
SRCS=	rk_spi.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \
	spibus_if.h \

.include <bsd.kmod.mk>
