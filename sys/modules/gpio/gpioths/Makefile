# $FreeBSD: d1311ed6015481051509f419907ef024f5277c53 $
#

.PATH:	${SRCTOP}/sys/dev/gpio/

KMOD=	gpioths
SRCS=	gpioths.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	gpio_if.h \
	gpiobus_if.h \
	ofw_bus_if.h \
	opt_platform.h \

CFLAGS+=  -I. -I${SRCTOP}/sys/dev/gpio/

.include <bsd.kmod.mk>
