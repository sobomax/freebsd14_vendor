# $FreeBSD: 3270f1355d72215938230ac03997d16001d63b9b $
#
# Author: Harti Brandt <harti@freebsd.org>

LIBBASE= ${SRCTOP}/sys/contrib/ngatm

.PATH: ${SRCTOP}/sys/netgraph/atm/sscop ${LIBBASE}/netnatm/saal

KMOD=	ng_sscop
SRCS= 	ng_sscop.c saal_sscop.c
CFLAGS+= -I${LIBBASE} # -DSSCOP_DEBUG

.include <bsd.kmod.mk>
