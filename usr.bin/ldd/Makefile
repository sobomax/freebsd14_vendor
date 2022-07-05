# $FreeBSD: 1a671bc9f4022af44d968e0d05f06412a212ccf3 $

PROG?=		ldd
SRCS=		ldd.c

CFLAGS+=	-I${SRCTOP}/libexec/rtld-elf
LIBADD=		elf

.include <bsd.prog.mk>
