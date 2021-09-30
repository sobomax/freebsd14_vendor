# $FreeBSD: febd4a0c1babb5ea83646ff18e059cc4d0d17e36 $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/cddl/dev/systrace

KMOD=		systrace_linux32

SRCS=		systrace.c
SRCS+=		vnode_if.h

CFLAGS+=	${OPENZFS_CFLAGS}
CFLAGS+=	-DLINUX32_SYSTRACE

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
CWARNFLAGS+=	${OPENZFS_CWARNFLAGS}
