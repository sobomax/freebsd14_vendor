# $FreeBSD: 21ff164a31cc8b61acc62b90a5e29cfd8cd887fd $

S=     ${SRCTOP}/sys

.PATH: $S/dev/usb/input

KMOD=	atp
SRCS=	opt_bus.h opt_usb.h device_if.h bus_if.h usb_if.h vnode_if.h usbdevs.h \
	atp.c

.include <bsd.kmod.mk>
