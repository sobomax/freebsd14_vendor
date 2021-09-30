# $FreeBSD: ced1a4fb332c099f2174d89e72ac3c6b733a1903 $

.PATH: ${SRCTOP}/sys/dev/if_ndis

KMOD=	if_ndis
SRCS=	if_ndis.c if_ndis_pci.c if_ndis_pccard.c if_ndis_usb.c
SRCS+=	device_if.h bus_if.h pci_if.h card_if.h pccarddevs.h
SRCS+=	opt_bus.h opt_usb.h usb_if.h usbdevs.h

.include <bsd.kmod.mk>
