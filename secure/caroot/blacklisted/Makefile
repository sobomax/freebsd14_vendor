# $FreeBSD: b7ccfbe88c03acb1ee9fbc0eadb9fa769fbe3428 $

BINDIR=		/usr/share/certs/blacklisted

BLACKLISTED_CERTS!=	echo ${.CURDIR}/*.pem 2> /dev/null || true

FILES+=	 ${BLACKLISTED_CERTS}

.include <bsd.prog.mk>
