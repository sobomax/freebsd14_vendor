# $FreeBSD: f91bef24ffe99c2e85930a8bd94f4a2de2721ecd $

GROT=	../../../../../lib/libc/regex/grot

.PHONY: tests
tests:
	cd ${GROT}; make && echo "PASS regex"

.PHONY: clean
clean:
	cd ${GROT}; make spotless
