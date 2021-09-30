# $FreeBSD: 964c6e66382661a783872a015b23e80a8db99097 $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

.PATH: ${SYSDIR}/contrib/dpdk_rte_lpm

KMOD=	dpdk_lpm4
SRCS=	opt_inet.h
SRCS.INET=dpdk_lpm.c rte_lpm.c

.include <bsd.kmod.mk>
