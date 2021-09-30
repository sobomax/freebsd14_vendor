#	from @(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: bd57a65e1f06fedae71946027381bc0de32126e1 $

.PATH: ${LIBC_SRCTOP}/db/mpool

SRCS+=	mpool.c \
	mpool-compat.c
