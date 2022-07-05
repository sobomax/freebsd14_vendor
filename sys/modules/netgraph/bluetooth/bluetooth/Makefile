# $Id: Makefile,v 1.1 2002/11/24 20:39:57 max Exp $
# $FreeBSD: eb6c64b7ae657b5a6e37e5c57795b4ad69c44bf3 $

.PATH: ${SRCTOP}/sys/netgraph/bluetooth/common

CFLAGS+=	-I${SRCTOP}/sys/netgraph/bluetooth/include

KMOD=		ng_bluetooth
SRCS=		ng_bluetooth.c

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
