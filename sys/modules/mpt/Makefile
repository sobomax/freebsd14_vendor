# $FreeBSD: f07c95fe4e7e232d3b914e865b84cb614c097a64 $

.PATH: ${SRCTOP}/sys/dev/mpt

KMOD=	mpt
SRCS=	bus_if.h device_if.h pci_if.h \
	opt_cam.h opt_ddb.h \
	mpt.c mpt_cam.c mpt_debug.c mpt_pci.c mpt_raid.c mpt_user.c

.include <bsd.kmod.mk>
