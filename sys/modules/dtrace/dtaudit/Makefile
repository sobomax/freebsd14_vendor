# $FreeBSD: 3571bcbb7ea237d01748889e315fc07f7e2830a3 $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/security/audit

KMOD=		dtaudit
SRCS=		audit_dtrace.c	\
		vnode_if.h

CFLAGS+= ${OPENZFS_CFLAGS}

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
CWARNFLAGS+=	${OPENZFS_CWARNFLAGS}
