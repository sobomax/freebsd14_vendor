#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: f937cddf97b5a7d15aff615a6955ac3749144699 $

.PATH: ${SRCTOP}/lib/libc/gen		# for pw_scan.c

PROG=	pwd_mkdb
MAN=	pwd_mkdb.8
SRCS=	pw_scan.c pwd_mkdb.c

CFLAGS+= -I${SRCTOP}/lib/libc/gen		# for pw_scan.h

.include <bsd.prog.mk>
