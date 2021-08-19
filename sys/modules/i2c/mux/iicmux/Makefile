# $FreeBSD: 1d642bf3e5ae55ee7c618aca46cad6b22af59fc7 $

.PATH:		${SRCTOP}/sys/dev/iicbus/mux

KMOD=	iicmux
SRCS=   iicmux.c iicmux_if.c

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
