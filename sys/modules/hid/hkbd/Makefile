# $FreeBSD: 38221227d1cd3dd159400e54720ea65acdcb9959 $

.PATH: ${SRCTOP}/sys/dev/hid

KMOD=	hkbd
SRCS=	hkbd.c
SRCS+=	opt_evdev.h opt_kbd.h opt_hkbd.h
SRCS+=	bus_if.h device_if.h

.include <bsd.kmod.mk>
