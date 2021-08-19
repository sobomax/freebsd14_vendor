# $FreeBSD: 0223fe467f26123e2fd98bcf1e36ad04edd94b58 $

.PATH: ${SRCTOP}/sys/arm/freescale/imx

KMOD=	imx_i2c
SRCS=	imx_i2c.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	fdt_pinctrl_if.h \
	gpio_if.h \
	iicbus_if.h \
	ofw_bus_if.h \
	opt_platform.h \

.include <bsd.kmod.mk>
