# $FreeBSD: 5de6eed37faf69da2f564a5aa8d8600acb53486e $

.if exists(${.CURDIR:H:H}/lib/libcrypt/obj)
CRYPTOBJDIR=	${.CURDIR:H:H}/lib/libcrypt/obj
.else
CRYPTOBJDIR=	${.CURDIR:H:H}/lib/libcrypt
.endif

WARNS?=		0
