# $FreeBSD: 000866578547672a7c5b3d346d5f41a0be8b57cf $

.PATH: ${.CURDIR:H}/mapper_serial

SHLIB=	mapper_parallel
SRCS+=	citrus_mapper_serial.c
CFLAGS.gcc+= --param max-inline-insns-single=32

.include <bsd.lib.mk>
