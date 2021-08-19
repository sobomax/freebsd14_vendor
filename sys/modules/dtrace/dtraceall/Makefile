# $FreeBSD: c331a1f53f0b9ba062ddd9cdd6199c41f22b977a $

SYSDIR?=	${SRCTOP}/sys

KMOD=		dtraceall
SRCS=		dtraceall.c opt_nfs.h

CFLAGS+=	-I${SYSDIR}

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
