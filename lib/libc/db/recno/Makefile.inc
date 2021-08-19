#       from @(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: 744109f46d83f6d475c5bf89d3cba00c1f3934d0 $

.PATH: ${LIBC_SRCTOP}/db/recno

SRCS+=	rec_close.c rec_delete.c rec_get.c rec_open.c rec_put.c rec_search.c \
	rec_seq.c rec_utils.c
