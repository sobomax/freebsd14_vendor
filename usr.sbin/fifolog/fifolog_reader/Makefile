# $FreeBSD: 2dd103f91f2c1aaa9208ec592a7c038ebb4f9235 $

PROG=	fifolog_reader

CFLAGS+= -I${.CURDIR:H}/lib

MAN=

LIBADD=	fifolog

regress:
	./${PROG} /tmp/fifolog.0
	./${PROG} -t /tmp/fifolog.0
	./${PROG} /tmp/fifolog.1
	./${PROG} -B "00:00" /tmp/fifolog.1
	./${PROG} -T "%y%m%d-%H%M%S" /tmp/fifolog.1
	./${PROG} -T "" /tmp/fifolog.1

.include <bsd.prog.mk>
