# $FreeBSD: 05f57cb2a6b9be10b5e20ec400005f6084493712 $

.PATH: ${SRCTOP}/sys/dev/tdfx

KMOD=	3dfx
SRCS=	bus_if.h pci_if.h device_if.h tdfx_pci.h tdfx_io.h\
	tdfx_vars.h tdfx_pci.c

# Uncomment this for debugging messages
#CFLAGS+=	-DDEBUG

.include <bsd.kmod.mk>
