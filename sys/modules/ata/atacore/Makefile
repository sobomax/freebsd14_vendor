# $FreeBSD: f0cd0b4349d375730db500fbd51018c4009aea86 $

.PATH: ${SRCTOP}/sys/dev/ata

KMOD=	ata
SRCS=	ata-all.c ata_if.c ata-lowlevel.c
SRCS+=	ata_if.h bus_if.h device_if.h opt_cam.h pci_if.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
