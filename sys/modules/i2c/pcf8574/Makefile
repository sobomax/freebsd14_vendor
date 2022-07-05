# $FreeBSD: 7c4fe37297e4df927afbedb5e5c5e4f7f13fbdb7 $

.PATH:	${SRCTOP}/sys/dev/iicbus/gpio/
KMOD	= pcf8574
SRCS	= pcf8574.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	gpio_if.h \
	iicbus_if.h \
	opt_platform.h \

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
