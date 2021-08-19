# $FreeBSD: 6c298be0223f67a4d1a0a867433fd9003e27b0b9 $

.include <src.opts.mk>

.if exists(${.CURDIR:H:H}/lib/libcrypt/obj)
CRYPTOBJDIR=	${.CURDIR:H:H}/lib/libcrypt/obj
.else
CRYPTOBJDIR=	${.CURDIR:H:H}/lib/libcrypt
.endif

.if ${MK_OPENSSH} != "no"
SSHDIR=		${SRCTOP}/crypto/openssh
.endif

WARNS?=		0
