# $FreeBSD: a4f46d62f0432cbd7fa5dd4fcc2327c9f3416318 $

PACKAGE=	kerberos

LIB=	vers
INTERNALLIB=
SRCS=	print_version.c roken.h
CFLAGS+=-I. -I${KRB5DIR}/lib/roken

CLEANFILES= roken.h

roken.h:
	${MAKE_ROKEN} > ${.TARGET}

.include <bsd.lib.mk>

.PATH: ${KRB5DIR}/lib/vers
