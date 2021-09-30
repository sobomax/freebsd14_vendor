# $FreeBSD: 781adc86ef7a1021e347b176cc4432892f392e74 $

.include <src.opts.mk>

.PATH: ${SRCTOP}/usr.bin/newkey

PROG=	chkey
SRCS=	chkey.c generic.c update.c
CFLAGS+= -I${SRCTOP}/usr.bin/newkey
.if ${MK_NIS} != "no"
CFLAGS+= -DYP
.endif
LIBADD+=	rpcsvc mp

.include <bsd.prog.mk>
