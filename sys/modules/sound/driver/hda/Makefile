# $FreeBSD: 5646724efd947b26dfb4a7ecc7c8b35f9dd553a1 $

.PATH: ${SRCTOP}/sys/dev/sound/pci/hda

KMOD=	snd_hda
SRCS=	device_if.h bus_if.h pci_if.h channel_if.h mixer_if.h hdac_if.h
SRCS+=	hdaa.c hdaa.h hdaa_patches.c hdac.c hdac_if.h hdac_if.c
SRCS+=	hdacc.c hdac_private.h hdac_reg.h hda_reg.h hdac.h

.include <bsd.kmod.mk>
