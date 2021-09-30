# $FreeBSD: 897e4cb6040a6cb9b2a4593222c8e4665b293d39 $

.PATH:	${SRCTOP}/sys/net
KMOD=	if_lagg
SRCS=	if_lagg.c ieee8023ad_lacp.c opt_inet.h opt_inet6.h opt_kern_tls.h
SRCS+=	opt_ratelimit.h

.include <bsd.kmod.mk>
