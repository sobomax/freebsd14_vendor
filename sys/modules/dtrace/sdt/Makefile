# $FreeBSD: a025848e3a60d64d1d7e1f7e642b9ce5a3aea8b4 $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/cddl/dev/sdt

KMOD=		sdt
SRCS=		sdt.c
SRCS+=		vnode_if.h

CFLAGS+=	${OPENZFS_CFLAGS}

.include <bsd.kmod.mk>
CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
CWARNFLAGS+=	${OPENZFS_CWARNFLAGS}
