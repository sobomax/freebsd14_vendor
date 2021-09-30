# $FreeBSD: 20a8499ffc09f3c8ff876422d2dba7a9ac31165b $

.PATH:	${SRCTOP}/sys/dev/drm
KMOD	= mga
SRCS	= mga_drv.c mga_state.c mga_warp.c mga_dma.c \
	mga_irq.c
SRCS	+=device_if.h bus_if.h pci_if.h opt_drm.h

.include <bsd.kmod.mk>
