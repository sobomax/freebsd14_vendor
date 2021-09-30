# $FreeBSD: 9ab327674d764b22689b092619deb40b7d2b3f39 $

KMOD		=  ciss
.PATH:		${SRCTOP}/sys/dev/${KMOD}
SRCS		=  ciss.c
SRCS		+= opt_scsi.h opt_cam.h
SRCS		+= device_if.h bus_if.h pci_if.h

#CFLAGS		+=-DCISS_DEBUG

.include <bsd.kmod.mk>
