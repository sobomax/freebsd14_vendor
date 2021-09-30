# $FreeBSD: eea6658d421b0003977490859e07aedafd7f0321 $
#
.PATH:	${SRCTOP}/sys/dev/cmx

KMOD=	cmx
SRCS=	cmx.c cmxvar.h cmxreg.h \
	cmx_pccard.c \
	pccarddevs.h device_if.h bus_if.h card_if.h

.include <bsd.kmod.mk>
