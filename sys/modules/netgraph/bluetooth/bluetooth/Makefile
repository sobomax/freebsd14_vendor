# $Id: Makefile,v 1.1 2002/11/24 20:39:57 max Exp $
# $FreeBSD: 2e25d8e37cb5567c23705733a634bbdef177646f $

.PATH: ${SRCTOP}/sys/netgraph/bluetooth/common

CFLAGS+=	-I${SRCTOP}/sys/netgraph/bluetooth/include

KMOD=		ng_bluetooth
SRCS=		ng_bluetooth.c

.include <bsd.kmod.mk>
