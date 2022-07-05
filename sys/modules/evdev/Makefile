# $FreeBSD: 5888825f4773b9c4382ae7ba7872643224e34f52 $

.PATH: ${SRCTOP}/sys/dev/evdev

KMOD=	evdev
SRCS=	cdev.c evdev.c evdev_mt.c evdev_utils.c
SRCS+=	opt_evdev.h bus_if.h device_if.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
