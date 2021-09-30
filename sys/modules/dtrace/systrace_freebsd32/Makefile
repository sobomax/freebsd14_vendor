# $FreeBSD: 3b77bc4c6d0ebeeff995759dbf5a671b3241a512 $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/cddl/dev/systrace

KMOD=		systrace_freebsd32
SRCS=		systrace.c
SRCS+=		vnode_if.h

CFLAGS+=	${OPENZFS_CFLAGS}
CFLAGS+=	-DFREEBSD32_SYSTRACE

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
CWARNFLAGS+=	${OPENZFS_CWARNFLAGS}
