# $FreeBSD: 74f9d62a25fa634a6b343e09998711d9800eedc1 $

.PATH: ${SRCTOP}/contrib/netcat

PROG=	nc
SRCS=	netcat.c atomicio.c socks.c

CFLAGS+=-DIPSEC
LIBADD=	ipsec

WARNS?=	2

.include <bsd.prog.mk>
