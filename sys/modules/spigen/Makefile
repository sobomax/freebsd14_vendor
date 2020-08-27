# $FreeBSD: releng/11.3/sys/modules/spigen/Makefile 332942 2018-04-24 17:00:08Z ian $

.PATH:	${SRCTOP}/sys/dev/spibus
KMOD=	spigen
SRCS=	spigen.c

# Generated files...
SRCS+=	\
	bus_if.h \
	device_if.h \
	opt_platform.h \
	spibus_if.h \

.if !empty(OPT_FDT)
SRCS+=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
