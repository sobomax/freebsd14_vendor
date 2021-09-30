# $FreeBSD: 6c0106095016bc9973cc0b5608c2261336cbedad $

PROG=	athsurvey

.include <../Makefile.inc>

SRCS=	athsurvey.c
SRCS+=	opt_ah.h
CLEANFILES+=	opt_ah.h

opt_ah.h:
	echo "#define AH_DEBUG 1" > opt_ah.h
	echo "#define AH_DEBUG_COUNTRY 1" >> opt_ah.h

.include <bsd.prog.mk>
