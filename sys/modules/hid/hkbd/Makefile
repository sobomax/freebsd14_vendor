# $FreeBSD: 8bb1c339ac6c75416f4a33842fcce772616aa4c6 $

.PATH: ${SRCTOP}/sys/dev/hid

KMOD=	hkbd
SRCS=	hkbd.c
SRCS+=	opt_hid.h opt_evdev.h opt_kbd.h opt_hkbd.h
SRCS+=	bus_if.h device_if.h

.include <bsd.kmod.mk>
