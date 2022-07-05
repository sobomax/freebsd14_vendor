# $FreeBSD: 639aed0d94a5d01ff6f3ad17bdd6d9ce164f9686 $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

.PATH: ${SYSDIR}/net ${SYSDIR}/netinet ${SYSDIR}/netinet6

KMOD=	if_gif
SRCS=	if_gif.c opt_inet.h opt_inet6.h
SRCS.INET=in_gif.c
SRCS.INET6=in6_gif.c

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
