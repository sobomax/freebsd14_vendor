# $FreeBSD: aea5bd590ac64c49f63818d6875797c37baab5af $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/security/audit

KMOD=		dtaudit
SRCS=		audit_dtrace.c	\
		vnode_if.h

CFLAGS+=	-I${SYSDIR}/cddl/compat/opensolaris \
		-I${SYSDIR}/cddl/contrib/opensolaris/uts/common \
		-I${SYSDIR}

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
