# $FreeBSD: 1e201c5aaba4f1399a2bbfa4e090778b83e1ef2c $

.PATH:	${SRCTOP}/sys/dev/iicbus
KMOD=	max44009
SRCS=	max44009.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	opt_platform.h

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
