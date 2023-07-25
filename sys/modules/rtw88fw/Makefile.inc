# $FreeBSD: dfdfd17cb2450d4ffbff3da43af17925acfa2666 $
#
# Common rules for building firmware.  Note this gets auto-included
# by the subdir Makefile's as a consequence of included bsd.kmod.mk.

_NAME=		rtw${NAME}_fw.bin

IMG=		${_NAME}
KMOD=		${_NAME}

CLEANFILES+=	${IMG}

FIRMWS=		${IMG}:${IMG}:${VERSION}

${IMG}: ${SRCTOP}/sys/contrib/dev/rtw88fw/${IMG}
	cp ${.ALLSRC} ${.TARGET}

