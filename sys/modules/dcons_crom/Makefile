# $Id: Makefile,v 1.6 2003/10/24 15:43:24 simokawa Exp $
# $FreeBSD: b5ac6048b6c1ea150dc65ca5dc58d9864a4a7d99 $

.PATH:	${SRCTOP}/sys/dev/dcons

KMOD	= dcons_crom
SRCS	= dcons_crom.c dcons.h dcons_os.h \
		bus_if.h device_if.h

#KMODDEPS = firewire dcons

CFLAGS+= -I${SRCTOP}/sys

.include <bsd.kmod.mk>
