# $FreeBSD: a9e30eb60d0b6d464d6324b5b54e28213a5d4b43 $

.PATH: ${SRCTOP}/sys/dev/sn

KMOD=	if_sn
SRCS=	if_sn.c if_sn_isa.c if_sn_pccard.c device_if.h bus_if.h isa_if.h \
	card_if.h pccarddevs.h

.include <bsd.kmod.mk>
