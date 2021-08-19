#	From: @(#)Makefile	1.6 (Berkeley) 6/8/93
# $FreeBSD: 88ab5afcc2878597fc7f6005dbb56d27a1a5c2a6 $

VOLUME=		papers
DOC=		releng
SRCS=		stubs 0.t 1.t 2.t 3.t
EXTRA=		ref.bib
MACROS=		-ms
USE_REFER=
CLEANFILES=	stubs

stubs:
	@(echo .R1; echo database ${.CURDIR}/ref.bib; echo .R2) > ${.TARGET}

.include <bsd.doc.mk>
