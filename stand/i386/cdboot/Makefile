# $FreeBSD: 0598d5d80dceb310aa37ef1ed50f6a8029c838eb $

.include <bsd.init.mk>

PROG=	cdboot
STRIP=
BINMODE=${NOBINMODE}
SRCS=	${PROG}.S

CFLAGS+=-I${BOOTSRC}/i386/common

ORG=	0x7c00

LDFLAGS+=${LDFLAGS_BIN}

.include <bsd.prog.mk>
