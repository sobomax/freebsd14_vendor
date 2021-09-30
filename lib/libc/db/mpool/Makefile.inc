#	from @(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: 76ec0ebe5cd2940222d3a9c9138aafa2a20245b1 $

.PATH: ${LIBC_SRCTOP}/db/mpool

SRCS+=	mpool.c
.if ${MK_SYMVER} == yes
SRCS+=	mpool-compat.c
.endif
