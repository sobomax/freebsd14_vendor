# $FreeBSD: 73d5a4eefb063a97808fdcc06e0513e92152111e $

.PATH: ${.CURDIR:H}/ofwdump

PROG=	eeprom
MAN=	eeprom.8
MANSUBDIR= /sparc64
SRCS=	eeprom.c ofw_options.c ofw_util.c
CFLAGS+= -I${.CURDIR:H}/ofwdump

.include <bsd.prog.mk>
