#	$NetBSD: Makefile,v 1.2 2014/04/29 01:21:02 christos Exp $
#	$FreeBSD: ced8c9e725b7879ecc6a4bb3ad8556e159893985 $
.include <bsd.own.mk>

PROG=	getaddrinfo
SRCS=	getaddrinfo.c tables.h

CFLAGS+=	-I${SRCTOP}/lib/libnetbsd

LIBADD+=	netbsd util

SYS_SOCKET_H?=	${SRCTOP}/sys/sys/socket.h

CFLAGS+=	-I${.OBJDIR}
CLEANFILES+=	tables.h
tables.h: tables.awk ${SYS_SOCKET_H}
	LC_ALL=C awk -f ${.ALLSRC} > ${.TARGET}
.include <bsd.prog.mk>
