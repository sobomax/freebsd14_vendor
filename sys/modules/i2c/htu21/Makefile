# $FreeBSD: 8586b0c1515329f1981f1463b022f1700e3c2226 $

.PATH:	${SRCTOP}/sys/dev/iicbus
KMOD=	htu21
SRCS=	htu21.c

SRCS+=	\
	bus_if.h \
	device_if.h \
	iicbus_if.h \
	opt_platform.h

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
