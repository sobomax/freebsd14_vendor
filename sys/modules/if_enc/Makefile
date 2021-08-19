# $FreeBSD: 0431e9b84cd8e17b67b9793e58748f1f98da2c1e $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

.PATH: ${SYSDIR}/net

KMOD=	if_enc
SRCS=	if_enc.c opt_inet.h opt_inet6.h opt_ipsec.h

.include <bsd.kmod.mk>
