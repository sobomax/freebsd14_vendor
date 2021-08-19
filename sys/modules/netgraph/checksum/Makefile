# $FreeBSD: 4aa64c70e5c6f30e2dd96ed48709955305fce142 $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

KMOD=	ng_checksum
SRCS= 	ng_checksum.c opt_inet.h opt_inet6.h

.include <bsd.kmod.mk>
