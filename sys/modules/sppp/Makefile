# $FreeBSD: 017940e6d4ad7fe5b89df3e06728cd3146d9b3f0 $

.PATH: ${SRCTOP}/sys/net

KMOD=	sppp
SRCS=	if_spppfr.c if_spppsubr.c slcompress.c
SRCS+=	opt_inet.h opt_inet6.h

EXPORT_SYMS=	sppp_attach	\
		sppp_detach	\
		sppp_input	\
		sppp_ioctl	\
		sppp_dequeue	\
		sppp_pick	\
		sppp_isempty	\
		sppp_flush

.include <bsd.kmod.mk>
