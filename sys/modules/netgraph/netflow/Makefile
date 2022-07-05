# $FreeBSD: 35e8e6db7f364f3eb0ceb32088652587c47f7b1a $
#
# Author: Gleb Smirnoff <glebius@freebsd.org>
#

.PATH: ${SRCTOP}/sys/netgraph/netflow

KMOD=   ng_netflow
SRCS=   ng_netflow.c netflow.c netflow_v9.c opt_inet.h opt_inet6.h opt_route.h

.include <bsd.kmod.mk>
