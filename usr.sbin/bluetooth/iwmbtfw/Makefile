# $FreeBSD: 03b608edc63fc93b6af6fac66e6973981d461146 $

PACKAGE=	bluetooth
CONFS=		iwmbtfw.conf
CONFSDIR=       /etc/devd
PROG=		iwmbtfw
MAN=		iwmbtfw.8
LIBADD+=	usb
SRCS=		main.c iwmbt_fw.c iwmbt_hw.c

.include <bsd.prog.mk>
