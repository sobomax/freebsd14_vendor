#	@(#)Makefile	8.1 (Berkeley) 5/31/93
# $FreeBSD: 529075faedd8fb05102d8e39493b5ebc09dab71a $

PROG=	fortune
MAN=	fortune.6
CFLAGS+=-DDEBUG -I${FORTUNE_SRC}/strfile

.include <bsd.prog.mk>

test:	${PROG}
	./${PROG} -m brass
