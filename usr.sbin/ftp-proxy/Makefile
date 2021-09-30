# $FreeBSD: 7d05aa9bf624494103f130ee364663e3be4703b7 $

.PATH:	${SRCTOP}/contrib/pf/ftp-proxy

PROG=	ftp-proxy
MAN=	ftp-proxy.8

SRCS=	ftp-proxy.c filter.c

CFLAGS+=-I${SRCTOP}/contrib/pf/libevent

LIBADD=	event1

WARNS?=	3

.include <bsd.prog.mk>
