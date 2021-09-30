# $FreeBSD: 2094ad29d54b97b25a05538d28f3410da9e179e9 $

PACKAGE=runtime
PROG=	recoverdisk

LDFLAGS += -lm

.include <bsd.prog.mk>

test:	${PROG}
	./${PROG} /dev/ad0
