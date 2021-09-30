# $FreeBSD: 53e3364f0e3aa3ee33f561dfd07dec40737562ef $

.PATH: ${SRCTOP}/sys/dev/bge

KMOD=	if_bge
SRCS=	if_bge.c miibus_if.h miidevs.h device_if.h bus_if.h pci_if.h

.if ${MACHINE_CPUARCH} == sparc64
SRCS+=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
