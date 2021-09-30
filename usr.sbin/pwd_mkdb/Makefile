#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: f8a2b20ef10bf0cfb04b5b55b6ff884909d302e4 $

.PATH: ${SRCTOP}/lib/libc/gen		# for pw_scan.c

PACKAGE=	runtime
PROG=	pwd_mkdb
MAN=	pwd_mkdb.8
SRCS=	pw_scan.c pwd_mkdb.c

CFLAGS+= -I${SRCTOP}/lib/libc/gen		# for pw_scan.h
.if defined(BOOTSTRAPPING)
CFLAGS+=-I${.CURDIR}/bootstrap
.endif

.include <bsd.prog.mk>
