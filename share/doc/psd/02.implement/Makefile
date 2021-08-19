#	@(#)Makefile	8.1 (Berkeley) 6/8/93
# $FreeBSD: 89d0dc3c3b9527d8445f8ed75e8d246756a322ea $

VOLUME=		psd/02.implement
SRCS=		stubs implement
EXTRA=		ref.bib
MACROS=		-ms
USE_PIC=
USE_REFER=
USE_SOELIM=
CLEANFILES=	stubs

stubs:
	@(echo .R1; echo database ${.CURDIR}/ref.bib; \
	    echo accumulate; echo .R2) > ${.TARGET}

.include <bsd.doc.mk>
