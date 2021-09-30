# $FreeBSD: 7ad96555a7dc0f3d430f4a5e4c867bfca413d0c2 $

S=     ${SRCTOP}/sys

.PATH: $S/dev/usb/input

KMOD=	usbhid
SRCS=	opt_usb.h bus_if.h device_if.h hid_if.h usb_if.h usbhid.c

.include <bsd.kmod.mk>
