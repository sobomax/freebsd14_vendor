#	@(#)Makefile	8.1 (Berkeley) 6/5/93
# $FreeBSD: cdb2f313c5f70da132d1d3ee8a5ea73ba6e41e43 $

PACKAGE=ufs
PROG=	tunefs
SRCS=	tunefs.c getmntopts.c
LIBADD=	ufs
MAN=	tunefs.8

MOUNT=	${SRCTOP}/sbin/mount
CFLAGS+=	-I${MOUNT}
.PATH:	${MOUNT}

WARNS?=	3

.include <bsd.prog.mk>
