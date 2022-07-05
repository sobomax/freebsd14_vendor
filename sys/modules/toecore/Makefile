# $FreeBSD: a5c6024de1d61838619d4e49c18ba6f72b556522 $

.PATH: ${SRCTOP}/sys/netinet

KMOD=	toecore
SRCS=	toecore.c
SRCS+=	opt_ofed.h opt_inet.h opt_inet6.h

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
