# $FreeBSD: c488491bd525bea1961711baf2399221260f2549 $
#

.PATH:  ${SRCTOP}/sys/i386/bios

KMOD=	smapi
SRCS=	smapi.c smapi_bios.S \
	bus_if.h device_if.h

.include <bsd.kmod.mk>

CFLAGS.smapi_bios.S=	${CLANG_NO_IAS34}
