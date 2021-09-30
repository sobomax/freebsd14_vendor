# $FreeBSD: 0b023eebc01cb5e2790096e4583bb55f8d59a2b1 $

PROG=	athsurvey

.include <../Makefile.inc>

SRCS=	athsurvey.c
SRCS+=	opt_ah.h
CLEANFILES+=	opt_ah.h

opt_ah.h:
	echo "#define AH_DEBUG 1" > opt_ah.h
	echo "#define AH_DEBUG_COUNTRY 1" >> opt_ah.h
	echo "#define AH_SUPPORT_AR5416 1" >> opt_ah.h

.include <bsd.prog.mk>
