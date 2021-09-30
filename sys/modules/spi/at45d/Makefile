# $FreeBSD: 1fa3d289013771792a58cf0fe983c722461d6e5e $

.PATH:	${SRCTOP}/sys/dev/flash

KMOD=	at45d
SRCS=	at45d.c

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
