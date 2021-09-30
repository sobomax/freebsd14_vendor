# $FreeBSD: 4f949bb562b8b9140e3d58e11c6258a02f57ecca $

.PATH: ${SRCTOP}/sys/arm/allwinner

KMOD=	aw_pwm
SRCS=	aw_pwm.c

SRCS+=	\
	bus_if.h \
	clknode_if.h \
	device_if.h \
	ofw_bus_if.h \
	pwmbus_if.h

.include <bsd.kmod.mk>
