# $FreeBSD: e9d12fd9a36ac367078685b73ba739696bb83035 $

.PATH:	${SRCTOP}/sys/dev/iicbus
KMOD=	icee
SRCS=	icee.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	ofw_bus_if.h \
	opt_platform.h \

.include <bsd.kmod.mk>
