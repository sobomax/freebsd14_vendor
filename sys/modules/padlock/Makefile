# $FreeBSD: 7100733c1d4157d81940aef598d1511cfe7fe4ae $

.PATH: ${SRCTOP}/sys/crypto/via

KMOD=	padlock
SRCS=	padlock.c padlock_cipher.c padlock_hash.c
SRCS   += device_if.h bus_if.h opt_bus.h cryptodev_if.h

.include <bsd.kmod.mk>
