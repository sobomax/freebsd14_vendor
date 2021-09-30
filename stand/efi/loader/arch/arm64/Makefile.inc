# $FreeBSD: a71bcc2e1a1fd0592a750b2106818227ddce758f $

HAVE_FDT=yes

SRCS+=	exec.c \
	start.S

.PATH:	${BOOTSRC}/arm64/libarm64
CFLAGS+=-I${BOOTSRC}/arm64/libarm64
SRCS+=	cache.c

CFLAGS+=	-mgeneral-regs-only
