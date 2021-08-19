# $FreeBSD: 1c744a7bb9213f5589de390f532911fda280e812 $

.include <bsd.compiler.mk>

SRCS+=	lex.l yacc.y
CFLAGS+= -I${.CURDIR} -I${SRCTOP}/usr.bin/mkcsmapper \
	 -I${SRCTOP}/lib/libc/iconv \
	 -I${SRCTOP}/lib/libiconv_modules/mapper_std
CFLAGS.gcc+= --param max-inline-insns-single=64
