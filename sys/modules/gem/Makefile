# $FreeBSD: 13c9003dc38cbe5991e88ef8ebaf3ca4d97a4209 $

.PATH: ${SRCTOP}/sys/dev/gem

KMOD=	if_gem
SRCS=	bus_if.h device_if.h if_gem.c if_gem_pci.c miibus_if.h
SRCS+=	${ofw_bus_if} pci_if.h

.if ${MACHINE_CPUARCH} == "powerpc"
ofw_bus_if=	ofw_bus_if.h
.endif

.include <bsd.kmod.mk>
