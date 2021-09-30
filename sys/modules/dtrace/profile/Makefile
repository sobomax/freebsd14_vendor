# $FreeBSD: b3eec9a19f237530aeda40bce9fc4a03ab77e3d1 $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/cddl/dev/profile

KMOD=		profile
SRCS=		profile.c
SRCS+=		vnode_if.h

CFLAGS+= 	${OPENZFS_CFLAGS}

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
CWARNFLAGS+=	${OPENZFS_CWARNFLAGS}
