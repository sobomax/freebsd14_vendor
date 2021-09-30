# $FreeBSD: 6a4e8af952e124f2b2b57f1e92a93721f11aac07 $

.PATH: ${SRCTOP}/sys/dev/vmware/pvscsi

KMOD=	pvscsi
SRCS=	pvscsi.c
SRCS+=	device_if.h bus_if.h pci_if.h
SRCS+=	opt_cam.h

.include <bsd.kmod.mk>
