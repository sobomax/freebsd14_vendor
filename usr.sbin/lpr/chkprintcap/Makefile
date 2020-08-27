# $FreeBSD: releng/11.3/usr.sbin/lpr/chkprintcap/Makefile 321276 2017-07-20 01:07:15Z ngie $

.PATH: ${.CURDIR:H}/common_source

PROG=	chkprintcap
MAN=	chkprintcap.8
SRCS=	chkprintcap.c skimprintcap.c

CFLAGS+= -I${.CURDIR:H}/common_source

LIBADD=	lpr

.include <bsd.prog.mk>
