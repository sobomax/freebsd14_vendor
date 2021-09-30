# $FreeBSD: 189d6c2df2a208de4ddf18a9601246f9a1f453b3 $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/cddl/dev

KMOD=		prototype
SRCS=		prototype.c
SRCS+=		vnode_if.h

CFLAGS+= 	${OPENZFS_CFLAGS}

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
CWARNFLAGS+=	${OPENZFS_CWARNFLAGS}
