# $FreeBSD: 5799a350c8aeaf99294f6c14584419c9b2a8e454 $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

.PATH: ${SYSDIR}/net ${SYSDIR}/netinet ${SYSDIR}/netinet6

KMOD=	if_gif
SRCS=	if_gif.c opt_inet.h opt_inet6.h
SRCS.INET=in_gif.c
SRCS.INET6=in6_gif.c

.include <bsd.kmod.mk>
