# $FreeBSD: e262b4d764b56fd06de2862aceb8ae1131b27557 $

PROG=test00
MAN=
SRCS= ${PROG}.c rijndael-alg-fst.c rijndael-api-fst.c

CFLAGS += -I${.CURDIR}/../.. -g -static

.include <bsd.prog.mk>

test:	${PROG}
	./${PROG}
