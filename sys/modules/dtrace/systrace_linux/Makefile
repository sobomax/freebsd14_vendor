# $FreeBSD: 56f422dfb9e5fdcd796f9f3fb6c41046b94d6419 $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/cddl/dev/systrace

KMOD=		systrace_linux

SRCS=		systrace.c
SRCS+=		vnode_if.h

CFLAGS+=	${OPENZFS_CFLAGS}
CFLAGS+=	-DLINUX_SYSTRACE

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
CWARNFLAGS+=	${OPENZFS_CWARNFLAGS}
