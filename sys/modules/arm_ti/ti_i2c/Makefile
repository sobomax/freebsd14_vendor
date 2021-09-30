# $FreeBSD: d0fbd5f1ca0a96f7e4abc84a6d10022aeebae955 $

.PATH: ${SRCTOP}/sys/arm/ti

KMOD=	ti_i2c
SRCS=	ti_i2c.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	ofw_bus_if.h \

.include <bsd.kmod.mk>
