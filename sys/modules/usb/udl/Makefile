# $FreeBSD: 5a14280b950f1c75b67b4a8072043c445635ebe0 $

S=     ${SRCTOP}/sys

.PATH: $S/dev/usb/video

KMOD=	udl
SRCS=	opt_bus.h opt_usb.h fb_if.h device_if.h \
	bus_if.h usb_if.h vnode_if.h usbdevs.h \
	udl.c

.include <bsd.kmod.mk>
