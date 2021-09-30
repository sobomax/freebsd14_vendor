# $FreeBSD: d001f9b4ed2a694ff5723af6f5bfc3f1dedba2fd $

.PATH: ${SRCTOP}/sys/dev/hptiop

KMOD=	hptiop
SRCS=	hptiop.c
SRCS+=	opt_scsi.h opt_cam.h
SRCS+=	device_if.h bus_if.h pci_if.h

.include <bsd.kmod.mk>
