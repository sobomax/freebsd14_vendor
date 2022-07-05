# $FreeBSD: c1a704beb535998d3ec85ea6a7224102e461db56 $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

.PATH: ${SYSDIR}/netinet

KMOD=	fib_dxr
SRCS=	in_fib_dxr.c opt_inet.h

.include <bsd.kmod.mk>
