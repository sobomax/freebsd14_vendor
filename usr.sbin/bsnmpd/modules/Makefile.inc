# $FreeBSD: bf633958e82b3e30e01884a7a426922eea944834 $

SHLIB_MAJOR=	6
PACKAGE=	bsnmp

MANFILTER=	sed -e 's%@MODPATH@%${LIBDIR}/%g'		\
		    -e 's%@DEFPATH@%${DEFSDIR}/%g'		\
		    -e 's%@MIBSPATH@%${BMIBSDIR}/%g'

NO_WMISSING_VARIABLE_DECLARATIONS=

.include "../Makefile.inc"
