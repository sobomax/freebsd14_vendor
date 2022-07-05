# $FreeBSD: ab46ba3f23637461128d0f6acfc4cfeb12a5170e $

.PATH: ${SRCTOP}/sys/dev/hid

KMOD=	ps4dshock
SRCS=	ps4dshock.c
SRCS+=	opt_hid.h
SRCS+=	bus_if.h device_if.h usbdevs.h

.include <bsd.kmod.mk>
