# $FreeBSD: 401b69a7ed982bc024a25741a88bc3b323c24ada $

.PATH:	${SRCTOP}/sys/dev/spibus
KMOD=	spigen
SRCS=	spigen.c

# Generated files...
SRCS+=	\
	bus_if.h \
	device_if.h \
	opt_platform.h \
	opt_spi.h \
	spibus_if.h \

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
