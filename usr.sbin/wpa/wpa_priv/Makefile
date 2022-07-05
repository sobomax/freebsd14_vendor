# $FreeBSD: d3b6933412764df17c946b937a0da9720b132ff3 $

.include "../Makefile.inc"

.include "../Makefile.crypto"

.PATH.c:${WPA_SUPPLICANT_DISTDIR}

PACKAGE=	wpa
PROG=	wpa_priv
SRCS=	os_unix.c eloop.c common.c wpa_debug.c wpabuf.c wpa_priv.c \
	l2_packet_freebsd.c

LIBADD+=pcap wpadrivers

.include <bsd.prog.mk>
