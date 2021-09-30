#	@(#)Makefile	8.1 (Berkeley) 6/5/93
# $FreeBSD: 9d0754edca89b5b46abefb27a6ed5151f856c4c2 $

PACKAGE=runtime
PROG=	tunefs
SRCS=	tunefs.c getmntopts.c
LIBADD=	ufs
MAN=	tunefs.8

MOUNT=	${SRCTOP}/sbin/mount
CFLAGS+=	-I${MOUNT}
.PATH:	${MOUNT}

WARNS?=	3

.include <bsd.prog.mk>
