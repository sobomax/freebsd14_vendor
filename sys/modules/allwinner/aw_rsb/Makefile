# $FreeBSD: 40aebb2fb13720d0e73ad56ca982f0212e74769b $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_rsb
SRCS=	aw_rsb.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \
	iicbus_if.h

.include <bsd.kmod.mk>
