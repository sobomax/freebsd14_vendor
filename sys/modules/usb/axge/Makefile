# $FreeBSD: 873f4e8f0e57ece09af704569aa1679711e5b3e2 $

.PATH: ${SRCTOP}/sys/dev/usb/net

KMOD=	if_axge
SRCS+=	if_axge.c usbdevs.h
SRCS+=	bus_if.h device_if.h miibus_if.h usb_if.h \
	opt_bus.h opt_inet.h opt_usb.h

.include <bsd.kmod.mk>
