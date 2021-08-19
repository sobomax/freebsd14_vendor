# $FreeBSD: 2a637976288347d10f1252e46b5e3a68eb98d497 $
PROG=	ministat

LIBADD=	m

.include <bsd.prog.mk>

test:	${PROG}
	./${PROG} < ${.CURDIR}/chameleon
	./${PROG} ${.CURDIR}/chameleon
	./${PROG} ${.CURDIR}/iguana ${.CURDIR}/chameleon
	./${PROG} -c 80 ${.CURDIR}/iguana ${.CURDIR}/chameleon
	./${PROG} -s -c 80 ${.CURDIR}/chameleon ${.CURDIR}/iguana
	./${PROG} -s -c 80 ${.CURDIR}/chameleon ${.CURDIR}/iguana ${.CURDIR}/iguana
