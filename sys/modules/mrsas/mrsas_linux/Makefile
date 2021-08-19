# Makefile for mrsas driver
# $FreeBSD: 5bf79b24b7bbb7bd5a31b5159ab631ca3aaee5bc $

.PATH: ${SRCTOP}/sys/dev/mrsas

KMOD=	mrsas_linux
SRCS=	mrsas_linux.c
SRCS+=	device_if.h bus_if.h pci_if.h

.include <bsd.kmod.mk>
