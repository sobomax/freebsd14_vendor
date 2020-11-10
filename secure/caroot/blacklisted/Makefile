# $FreeBSD: releng/12.2/secure/caroot/blacklisted/Makefile 364792 2020-08-26 00:50:27Z kevans $

BINDIR=		/usr/share/certs/blacklisted

BLACKLISTED_CERTS!=	echo ${.CURDIR}/*.pem 2> /dev/null || true

FILES+=	 ${BLACKLISTED_CERTS}

.include <bsd.prog.mk>
