# $FreeBSD: 1b15e66fd17d01427fddd65a698e483e0cb19381 $
#
# Common rules for building firmware.  Note this gets auto-included
# by the subdir Makefile's as a consequence of included bsd.kmod.mk.

_FIRM=	${IMG}.fw

CLEANFILES+=	${_FIRM}

FIRMWS=	${_FIRM}:${KMOD}:120

# FIRMWARE_LICENSE=	realtek

${_FIRM}: ${SRCTOP}/sys/contrib/dev/rsu/${_FIRM}.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}
