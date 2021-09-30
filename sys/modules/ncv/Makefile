# $FreeBSD: 3d66308576bfb12c0cd8da5d915d0a67a51877e6 $

.PATH: ${SRCTOP}/sys/dev/ncv

KMOD=	ncv
SRCS=	ncr53c500_pccard.c ncr53c500.c 
SRCS+=	device_if.h bus_if.h pci_if.h isa_if.h card_if.h pccarddevs.h
SRCS+=	opt_cam.h opt_scsi.h opt_ddb.h

.include <bsd.kmod.mk>
