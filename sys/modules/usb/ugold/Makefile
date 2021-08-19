#
# $FreeBSD: a6361ca6467da03d092e542a55fbec13ef56873b $
#

S=     ${SRCTOP}/sys

.PATH: $S/dev/usb/misc

KMOD=	ugold
SRCS=	opt_bus.h opt_usb.h device_if.h bus_if.h usb_if.h vnode_if.h \
	usbdevs.h ugold.c

.include <bsd.kmod.mk>
