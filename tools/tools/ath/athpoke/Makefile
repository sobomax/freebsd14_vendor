# $FreeBSD: a33c7396348b48dba350761554a255622e556d9a $

PROG=	athpoke
LINKS=	${BINDIR}/${PROG} ${BINDIR}/athpeek

.PATH.c: ${.CURDIR}/../common

SRCS=	athpoke.c
SRCS+=	dumpregs_5210.c
SRCS+=	dumpregs_5211.c
SRCS+=	dumpregs_5212.c
SRCS+=	dumpregs_5416.c
SRCS+=	opt_ah.h

CLEANFILES+=	opt_ah.h

opt_ah.h:
	echo "#define AH_DEBUG 1" > opt_ah.h
	echo "#define AH_DEBUG_COUNTRY 1" >> opt_ah.h
	echo "#define AH_SUPPORT_AR5416 1" >> opt_ah.h

.include <../Makefile.inc>

.include <bsd.prog.mk>
