#	@(#)Makefile	8.3 (Berkeley) 5/8/95
# $FreeBSD: 445a999a49a78eac8bed8874cee7db14244ce624 $

PACKAGE=runtime
MOUNT=	${SRCTOP}/sbin/mount
.PATH: ${MOUNT}

PROG=	df
SRCS=	df.c vfslist.c

CFLAGS+= -I${MOUNT}

LIBADD=	xo util

.include <bsd.prog.mk>
