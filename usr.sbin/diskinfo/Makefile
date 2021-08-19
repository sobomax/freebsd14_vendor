# $FreeBSD: 41c52da551be7e103dcee68543a4f25f6ae5ea6a $

PROG=	diskinfo
MAN=	diskinfo.8

LIBADD=	util

.include <bsd.prog.mk>

test:	${PROG}
	./${PROG} /dev/ad4 md50
	./${PROG} -v /dev/ad4 md50
	./${PROG} -t /dev/ad4
