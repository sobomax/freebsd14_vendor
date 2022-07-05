# $FreeBSD: 6593cd7d0574b7a8f2cbcaae4a282b793a04794d $

.PATH: ${SRCTOP}/sys/net

KMOD=	if_infiniband
SRCS=	if_infiniband.c \
	opt_inet.h \
	opt_inet6.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
