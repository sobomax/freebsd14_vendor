# $FreeBSD: 7aee04837957768a724fac9b8405dd055155e7b6 $

PROG=	athkey

SRCS=	athkey.c
SRCS+=	opt_ah.h

CLEANFILES+=	opt_ah.h

opt_ah.h:
	echo "#define AH_DEBUG 1" > opt_ah.h
	echo "#define AH_DEBUG_COUNTRY 1" >> opt_ah.h
	echo "#define AH_SUPPORT_AR5416 1" >> opt_ah.h


.include <../Makefile.inc>

.include <bsd.prog.mk>
