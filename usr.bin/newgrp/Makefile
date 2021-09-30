# $FreeBSD: 0a8e4a85e10ca4d73c3c4c0b58d47d8da78e06b3 $

PROG=	newgrp

LIBADD=	crypt util

.if defined(ENABLE_SUID_NEWGRP)
BINMODE=	4555
PRECIOUSPROG=
.endif

.include <bsd.prog.mk>
