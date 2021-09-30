# $FreeBSD: 23d3012f234445ca98e787909721554b7d0ee50b $

PROG=	athradar

.include <../Makefile.inc>

SRCS=	athradar.c
SRCS+=	opt_ah.h
CLEANFILES+=	opt_ah.h

opt_ah.h:
	echo "#define AH_DEBUG 1" > opt_ah.h
	echo "#define AH_DEBUG_COUNTRY 1" >> opt_ah.h
	echo "#define AH_SUPPORT_AR5416 1" >> opt_ah.h

.include <bsd.prog.mk>
