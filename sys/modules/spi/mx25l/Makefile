# $FreeBSD: d75b93040871f96fdbef930f86bceaf46fa02a1f $

.PATH:	${SRCTOP}/sys/dev/flash

KMOD=	mx25l
SRCS=	mx25l.c

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
