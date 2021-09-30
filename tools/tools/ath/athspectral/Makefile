# $FreeBSD: e13891fec72c413aa0ec4979ba87dc5f967d7962 $

PROG=	athspectral

.include <../Makefile.inc>

SRCS=	athspectral.c
SRCS+=	opt_ah.h
CLEANFILES+=	opt_ah.h

opt_ah.h:
	echo "#define AH_DEBUG 1" > opt_ah.h
	echo "#define AH_DEBUG_COUNTRY 1" >> opt_ah.h

.include <bsd.prog.mk>
