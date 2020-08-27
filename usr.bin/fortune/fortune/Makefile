#	@(#)Makefile	8.1 (Berkeley) 5/31/93
# $FreeBSD: releng/11.3/usr.bin/fortune/fortune/Makefile 321266 2017-07-20 00:50:01Z ngie $

PROG=	fortune
MAN=	fortune.6
CFLAGS+=-DDEBUG -I${FORTUNE_SRC}/strfile

.include <bsd.prog.mk>

test:	${PROG}
	./${PROG} -m brass
