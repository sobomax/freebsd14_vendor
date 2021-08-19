# $FreeBSD: 1b81cb2ca96839064df7168ddf1b07a7466721ca $

SYSDIR?=${SRCTOP}/sys
.PATH: ${SYSDIR}/net ${SYSDIR}/netinet ${SYSDIR}/netinet6
.include "${SYSDIR}/conf/kern.opts.mk"

KMOD=	if_gre
SRCS=	if_gre.c opt_inet.h opt_inet6.h opt_rss.h
SRCS.INET=	ip_gre.c
SRCS.INET6=	ip6_gre.c

.include <bsd.kmod.mk>
