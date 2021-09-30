# $FreeBSD: 9fd4e3ca98a0e4ce18e086f70994b1c0bd103865 $

.include "../Makefile.inc"

.PATH.c:${WPA_SUPPLICANT_DISTDIR} \
	${WPA_DISTDIR}/src/drivers

PACKAGE=	wpa
PROG=	wpa_priv
SRCS=	drivers.c os_unix.c eloop.c common.c wpa_debug.c wpabuf.c wpa_priv.c \
	driver_common.c l2_packet_freebsd.c

LIBADD=	pcap

.include "../Makefile.crypto"

.include <bsd.prog.mk>
