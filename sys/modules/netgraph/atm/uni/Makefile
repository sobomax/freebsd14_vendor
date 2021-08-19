# $FreeBSD: a260fcac274747a19226a7ffbf6ab5bc6a805369 $
#
# Author: Harti Brandt <harti@freebsd.org>
#

LIBBASE= ${SRCTOP}/sys/contrib/ngatm

.PATH: ${SRCTOP}/sys/netgraph/atm/uni
.PATH: ${LIBBASE}/netnatm/sig

KMOD=	ng_uni
SRCS=	ng_uni.c sig_call.c sig_uni.c sig_party.c sig_coord.c		\
	sig_reset.c sig_verify.c sig_print.c sig_unimsgcpy.c

CFLAGS+= -I${LIBBASE} -I${LIBBASE}/netnatm/sig # -DUNI_DEBUG

.include <bsd.kmod.mk>
