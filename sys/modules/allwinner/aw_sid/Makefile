# $FreeBSD: dc2beb74c874d536c1199baa7a3381fbeb4b4896 $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_sid
SRCS=	aw_sid.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \

.include <bsd.kmod.mk>
