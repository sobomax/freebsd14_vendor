# $FreeBSD: releng/12.2/sys/modules/if_enc/Makefile 365467 2020-09-08 18:29:20Z jhb $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

.PATH: ${SYSDIR}/net

KMOD=	if_enc
SRCS=	if_enc.c opt_inet.h opt_inet6.h opt_ipsec.h

.include <bsd.kmod.mk>
