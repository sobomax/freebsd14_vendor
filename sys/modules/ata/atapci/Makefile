# $FreeBSD: 5aaa265000cf1c8cbd4b425ad4b5ccf33505dc6b $

SUBDIR += chipsets

.PATH: ${SRCTOP}/sys/dev/ata

KMOD=	atapci
SRCS=	ata-pci.c ata-dma.c ata-sata.c
SRCS+=	ata_if.h bus_if.h device_if.h pci_if.h

.include <bsd.kmod.mk>
