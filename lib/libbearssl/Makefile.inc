# $FreeBSD: dd0e242c8ef0cdcdd8e02cd9d843b52257cdb329 $

BEARSSL?= ${SRCTOP}/contrib/bearssl
BEARSSL_SRC= ${BEARSSL}/src

CFLAGS+= -I${BEARSSL}/inc

