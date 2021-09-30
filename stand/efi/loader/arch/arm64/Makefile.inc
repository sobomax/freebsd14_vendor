# $FreeBSD: 9978d9c4ea9c0e30bcc0743f1ad9d1b40a2b2632 $

HAVE_FDT=yes

SRCS+=	exec.c \
	efiserialio.c \
	start.S

.PATH:	${BOOTSRC}/arm64/libarm64
CFLAGS+=-I${BOOTSRC}/arm64/libarm64
SRCS+=	cache.c

CFLAGS+=	-mgeneral-regs-only
