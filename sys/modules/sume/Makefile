# $FreeBSD: releng/12.2/sys/modules/sume/Makefile 364973 2020-08-30 07:34:32Z zec $

.PATH: ${SRCTOP}/sys/dev/sume

KMOD=	if_sume
SRCS=	if_sume.c
SRCS+=  device_if.h bus_if.h pci_if.h

.include <bsd.kmod.mk>
