# $FreeBSD: 3e24a438fe6993587fe8efcf123be049906926c5 $

PROG=	athradar

.include <../Makefile.inc>

SRCS=	athradar.c
SRCS+=	opt_ah.h
CLEANFILES+=	opt_ah.h

opt_ah.h:
	echo "#define AH_DEBUG 1" > opt_ah.h
	echo "#define AH_DEBUG_COUNTRY 1" >> opt_ah.h

.include <bsd.prog.mk>
