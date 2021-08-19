# $FreeBSD: 649901072caecce7aa5ad4dede2ddb297f38dd43 $

.PATH:	${SRCTOP}/sys/dev/glxsb
KMOD	= glxsb
SRCS	= glxsb.c glxsb_hash.c glxsb.h 
SRCS   += device_if.h pci_if.h bus_if.h
SRCS   += opt_bus.h cryptodev_if.h

.include <bsd.kmod.mk>
