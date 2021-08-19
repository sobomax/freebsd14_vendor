# $FreeBSD: e2d229bbb9fee2430991a8f8fc8f1f44e6eb90b1 $

.PATH:	${SRCTOP}/sys/dev/drm
KMOD	= mach64
SRCS	= mach64_dma.c mach64_drv.c mach64_irq.c mach64_state.c
SRCS	+=device_if.h bus_if.h pci_if.h opt_drm.h

.include <bsd.kmod.mk>
