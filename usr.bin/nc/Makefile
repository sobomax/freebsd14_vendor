# $FreeBSD: b518cfdc67ce5684e81b59b92610b606ab10022d $

.include <src.opts.mk>

.PATH: ${SRCTOP}/contrib/netcat

PROG=	nc
SRCS=	netcat.c atomicio.c socks.c

CFLAGS+=-DIPSEC
LIBADD=	ipsec

.if ${MK_STATS} != "no" && !defined(RESCUE)
LIBADD+=	sbuf stats
CFLAGS+=	-DWITH_STATS
.endif

WARNS?=	2

.include <bsd.prog.mk>
