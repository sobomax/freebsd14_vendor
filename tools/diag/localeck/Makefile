# $FreeBSD: 0dc7b0fe19b3f3b42856d68b86dff2a0ee65a4c0 $

PROG=	localeck
MAN=
WARNS?=	4

LOCALEDIR?= /usr/share/locale

test: ${PROG}
	sh docheck.sh ${LOCALEDIR}

.include <bsd.prog.mk>
