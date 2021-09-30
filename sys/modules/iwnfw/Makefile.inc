# $FreeBSD: 32355f387ecf0ea79e05f09ce9a53d46291948ee $
#
# Common rules for building firmware.  Note this gets auto-included
# by the subdir Makefile's as a consequence of included bsd.kmod.mk.

_FIRM=	${IMG}.fw

CLEANFILES+=	${_FIRM}

FIRMWS=	${_FIRM}:${KMOD}

#
# Note that a license ack is not needed for iwn.
#
#FIRMWARE_LICENSE=

${_FIRM}: ${SRCTOP}/sys/contrib/dev/iwn/${_FIRM}.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}
