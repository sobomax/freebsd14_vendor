# $FreeBSD: 89f612f35b5526a469d6ea673a2b0345e5ecb207 $

.PATH: ${SRCTOP}/sys/dev/isp

KMOD=	isp
SRCS=	bus_if.h device_if.h pci_if.h \
	opt_cam.h opt_ddb.h opt_isp.h \
	isp.c isp_library.c isp_target.c isp_freebsd.c isp_pci.c

.include <bsd.kmod.mk>
