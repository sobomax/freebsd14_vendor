# $FreeBSD: 9d04982226e4f3033bd13336c4019c0a6a029e43 $

.PATH:		${SRCTOP}/sys/dev/iicbus/mux

KMOD=	ltc430x
SRCS=	ltc430x.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	iicmux_if.h \
	opt_platform.h \

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif


.include <bsd.kmod.mk>
