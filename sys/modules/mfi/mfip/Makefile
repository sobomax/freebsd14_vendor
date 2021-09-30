# $FreeBSD: 13b6b19367c9109acd76b36cc26b7f185e6c30b3 $

.PATH: ${SRCTOP}/sys/dev/mfi

KMOD=	mfip
SRCS=	mfi_cam.c
SRCS+=	opt_mfi.h opt_cam.h
SRCS+=	device_if.h bus_if.h pci_if.h

.include <bsd.kmod.mk>
