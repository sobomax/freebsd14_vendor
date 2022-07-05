# $FreeBSD: 7b34a442019dbc851eab0cdc7f3023fa71512e0e $

PACKAGE=	kerberos

PROG=	slc
LIBROKEN_A=     ${.OBJDIR:H:H}/lib/libroken/libroken.a
LIBADD=	vers
LDADD=  ${LIBROKEN_A}
DPADD=  ${LIBROKEN_A}
MAN=
MK_PIE:=	no

SRCS=	roken.h \
	slc-gram.y \
	slc-lex.l

CFLAGS+=-I${KRB5DIR}/lib/roken -I${KRB5DIR}/lib/sl -I${KRB5DIR}/lib/vers -I.

CLEANFILES= roken.h slc-gram.c slc-lex.c

roken.h:
	${MAKE_ROKEN} > ${.TARGET}

#	${.OBJDIR:H}/make-roken/make-roken > ${.TARGET}

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/lib/roken ${KRB5DIR}/lib/sl
