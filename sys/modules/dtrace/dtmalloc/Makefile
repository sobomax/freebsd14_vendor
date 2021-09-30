# $FreeBSD: ffde4f811ee81f07c0517a8e05bb8c4800da24e7 $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/cddl/dev/dtmalloc

KMOD=		dtmalloc
SRCS=		dtmalloc.c
SRCS+=		vnode_if.h

CFLAGS+=	${OPENZFS_CFLAGS}

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
CWARNFLAGS+=	${OPENZFS_CWARNFLAGS}
