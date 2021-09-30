# $FreeBSD: cef5a88a746199f7ed5a61dab66c4bc0bc893487 $

LIB=	vers
INTERNALLIB=
SRCS=	print_version.c roken.h
CFLAGS+=-I. -I${KRB5DIR}/lib/roken

CLEANFILES= roken.h

roken.h:
	${MAKE_ROKEN} > ${.TARGET}

.include <bsd.lib.mk>

.PATH: ${KRB5DIR}/lib/vers
