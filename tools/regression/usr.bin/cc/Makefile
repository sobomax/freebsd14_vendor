# $FreeBSD: e5b1b90908f167604d1910592d4ac6a86608b8bb $

TESTS=	float
CFLAGS+=-lm

.PHONY: tests
tests: ${TESTS}
	for p in ${TESTS}; do ${.OBJDIR}/$$p; done

.PHONY: clean
clean:
	-rm -f ${TESTS}
