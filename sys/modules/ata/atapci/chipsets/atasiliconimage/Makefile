# $FreeBSD: 52e806366d0e79d29663b8e377aea2e89a30f839 $

.PATH: ${SRCTOP}/sys/dev/ata/chipsets

KMOD=	atasiliconimage
SRCS=	ata-siliconimage.c
SRCS+=	ata_if.h bus_if.h device_if.h pci_if.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
