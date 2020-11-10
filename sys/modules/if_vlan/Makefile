# $FreeBSD: releng/12.2/sys/modules/if_vlan/Makefile 365468 2020-09-08 18:33:41Z jhb $

.PATH: ${SRCTOP}/sys/net

KMOD=	if_vlan
SRCS=	if_vlan.c
SRCS+=	opt_inet.h opt_inet6.h opt_vlan.h opt_ratelimit.h

.include <bsd.kmod.mk>
