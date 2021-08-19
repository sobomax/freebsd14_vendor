# $FreeBSD: f2142a8fbc6447554015d37b8b8853e003ba9985 $

.PATH:	${SRCTOP}/sys/dev/drm
KMOD= 	savage
CFLAGS += -I${SRCTOP}/sys/dev/drm
SRCS=	savage_bci.c savage_drv.c savage_state.c
SRCS+=	device_if.h bus_if.h pci_if.h opt_drm.h

.include <bsd.kmod.mk>
