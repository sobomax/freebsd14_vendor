#	@(#)Makefile	8.3 (Berkeley) 5/8/95
# $FreeBSD: 6d36a370b02c967bb25d33543f24c960c1f63b48 $

PACKAGE=runtime
MOUNT=	${SRCTOP}/sbin/mount
.PATH: ${MOUNT}

PROG=	df
SRCS=	df.c vfslist.c

CFLAGS+= -I${MOUNT}

CFLAGS+= -DMOUNT_CHAR_DEVS
SRCS+=	getmntopts.c

LIBADD=	xo util

.include <bsd.prog.mk>
