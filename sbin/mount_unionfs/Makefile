#	@(#)Makefile	8.3 (Berkeley) 3/27/94
# $FreeBSD: 7e71360949951274696594d4032b15613b531113 $

PACKAGE=runtime
PROG=	mount_unionfs
SRCS=	mount_unionfs.c getmntopts.c
MAN=	mount_unionfs.8

MOUNT=	${.CURDIR:H}/mount
CFLAGS+=-I${MOUNT}

.PATH:	${MOUNT}

.include <bsd.prog.mk>
