# $FreeBSD: d5b888dd5bc6a9a4b814ed73f3fb7f54fb4d2d05 $

PROG=	fifolog_writer

CFLAGS+= -I${.CURDIR:H}/lib

MAN=

LIBADD=	fifolog

regress:
	date | ./${PROG} -z 0 /tmp/fifolog.0
	lptest 65 | ./${PROG} -z 9 /tmp/fifolog.1

.include <bsd.prog.mk>
