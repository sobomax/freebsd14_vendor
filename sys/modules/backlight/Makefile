# $FreeBSD: 31de4e804127f4b69654611c729a722c6d79c020 $

.PATH:	${SRCTOP}/sys/dev/backlight
KMOD=	backlight
SRCS=	backlight.c

SRCS+=	bus_if.h \
	device_if.h \
	opt_platform.h \
	backlight_if.h \
	backlight_if.c

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
