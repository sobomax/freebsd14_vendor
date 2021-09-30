# $FreeBSD: 443db1c00a2de630503b51235137804014628edf $

.PATH:	${SRCTOP}/contrib/pf/ftp-proxy

PROG=	ftp-proxy
MAN=	ftp-proxy.8

SRCS=	ftp-proxy.c filter.c

CFLAGS+=-I${SRCTOP}/contrib/pf/libevent

LIBADD=	event

WARNS?=	3

.include <bsd.prog.mk>
