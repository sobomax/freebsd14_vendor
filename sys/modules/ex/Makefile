# $FreeBSD: b7047ac5b941db3524e08f8739970bd43d578f91 $
#

.PATH:	${SRCTOP}/sys/dev/ex

KMOD=	if_ex
SRCS=	if_ex.c \
	if_ex_isa.c isa_if.h \
	if_ex_pccard.c card_if.h \
	bus_if.h device_if.h pccarddevs.h

.include <bsd.kmod.mk>
