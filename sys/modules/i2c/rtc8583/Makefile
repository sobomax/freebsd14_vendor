# $FreeBSD: db8db820036f2b2650cb76f4dda4e5f3a0db19a3 $

.PATH:	${SRCTOP}/sys/dev/iicbus
KMOD	= rtc8583
SRCS	= rtc8583.c 

# Generated files...
SRCS+=	\
	bus_if.h \
	clock_if.h \
	device_if.h \
	iicbus_if.h \
	opt_platform.h \

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
