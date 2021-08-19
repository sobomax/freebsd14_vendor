# $FreeBSD: 4b8ff3db1397cb14bfa3977db61f685b50e2a944 $

.PATH: ${SRCTOP}/sys/dev/pst

KMOD=	pst
SRCS=	pst-pci.c pst-iop.c pst-raid.c
SRCS+=  device_if.h bus_if.h pci_if.h

.include <bsd.kmod.mk>
