# $FreeBSD: 7832c870ca68f70615b5e100af76b0950fadd745 $

.PATH:	${SRCTOP}/sys/dev/spibus

KMOD=	spibus
SRCS=	spibus.c

.if !empty(OPT_FDT)
SRCS+=	ofw_spibus.c ofw_bus_if.h
.endif

# Generated files...
SRCS+=	\
	bus_if.h \
	device_if.h \
	opt_platform.h \
	spibus_if.c \
	spibus_if.h \

.include <bsd.kmod.mk>
