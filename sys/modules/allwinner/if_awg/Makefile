# $FreeBSD: 25cb34632e02c3d25f38775ccb68892624e1c3cc $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	if_awg
SRCS=	if_awg.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \

.include <bsd.kmod.mk>
