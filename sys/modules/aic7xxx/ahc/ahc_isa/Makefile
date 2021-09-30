
# $FreeBSD: 301e095e5c2aae93b20bf5932d74231a417249c1 $

.PATH:	${SRCTOP}/sys/dev/aic7xxx
KMOD=		ahc_isa

SRCS=	ahc_isa.c
SRCS+=	device_if.h bus_if.h pci_if.h isa_if.h
SRCS+=	opt_scsi.h opt_cam.h opt_aic7xxx.h

CFLAGS+=	-I${SRCTOP}/sys/dev/aic7xxx -I..

.include <bsd.kmod.mk>
