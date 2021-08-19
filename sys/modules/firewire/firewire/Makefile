# $FreeBSD: 72fa049d4326ef8b1d35e8c44529a8564113325d $

# Makefile for the IEEE1394 OHCI chipset

.PATH: ${SRCTOP}/sys/dev/firewire

KMOD= firewire
SRCS	= bus_if.h device_if.h pci_if.h \
	  firewire.c firewire.h firewire_phy.h firewirereg.h \
	  fwohci.c fwohci_pci.c fwohcireg.h fwohcivar.h \
	  iec13213.h iec68113.h \
	  fwcrom.c fwdev.c fwmem.c fwmem.h fwdma.c fwdma.h

.include <bsd.kmod.mk>
