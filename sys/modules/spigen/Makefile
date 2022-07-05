# $FreeBSD: 5ff4805399b39239eff38e173dc6057176c84586 $

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

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
