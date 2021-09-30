# $FreeBSD: 1c49d7b5513869229f2bb12a6a2b7cdc734475af $

.PATH:	${SRCTOP}/sys/dev/backlight
KMOD=	backlight
SRCS=	backlight.c

SRCS+=	bus_if.h \
	device_if.h \
	opt_platform.h \
	backlight_if.h \
	backlight_if.c

.include <bsd.kmod.mk>
