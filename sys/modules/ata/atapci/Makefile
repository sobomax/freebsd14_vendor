# $FreeBSD: bc00b57728ee52f267550b3de4ee477f1a187f9f $

SUBDIR += chipsets

.PATH: ${SRCTOP}/sys/dev/ata

KMOD=	atapci
SRCS=	ata-pci.c ata-dma.c ata-sata.c
SRCS+=	ata_if.h bus_if.h device_if.h pci_if.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
