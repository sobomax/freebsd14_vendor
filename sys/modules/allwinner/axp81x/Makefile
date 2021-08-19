# $FreeBSD: 890046f355d270db7f1c9135bdeaca0581e79178 $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	axp81x
SRCS=	axp81x.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \
	iicbus_if.h

.include <bsd.kmod.mk>
