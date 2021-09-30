# $FreeBSD: 0dbe5bd2a3904353430a3c96d735794f9a90ab5a $

SHLIB_NAME?=	padlock.so

SRCS=	e_padlock.c
.if ${MACHINE_CPUARCH} == "amd64"
SRCS+=	e_padlock-x86_64.S
.elif ${MACHINE_CPUARCH} == "i386"
SRCS+=	e_padlock-x86.S
.endif

.include <bsd.lib.mk>

.PATH:	${SRCTOP}/sys/crypto/openssl/${MACHINE_CPUARCH}
