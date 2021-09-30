# $FreeBSD: 015adbbba4039766b88f91d2c242b3741678f669 $

.PATH: ${SRCTOP}/sys/dev/arcmsr

KMOD=	arcmsr
SRCS=	arcmsr.c
SRCS+=	opt_scsi.h opt_cam.h
SRCS+=	device_if.h bus_if.h pci_if.h

.include <bsd.kmod.mk>
