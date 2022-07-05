# $FreeBSD: 6bb9b889b5171c1f42e61dabdb5020e6ddb5c5a1 $

PACKAGE=	kerberos

PROG=	make-roken
MAN=

CLEANFILES= make-roken.c

.include "../Makefile.inc"

make-roken.c: ${KRB5DIR}/lib/roken/roken.awk ${KRB5DIR}/lib/roken/roken.h.in
	awk -f ${.ALLSRC} > ${.TARGET}

.include <bsd.prog.mk>
