# $FreeBSD: 2aad727a67851485577b256e5c1fadccf8ec10d0 $

.include <src.opts.mk>

.include "../Makefile.inc"

.include "../Makefile.crypto"

.PATH.c:${WPA_SUPPLICANT_DISTDIR}

PACKAGE=	wpa
PROG=	wpa_cli
SRCS=	wpa_cli.c

MAN=	wpa_cli.8

CFLAGS+= -DCONFIG_TLS=openssl
# enable use of d_type to identify unix domain sockets
CFLAGS+= -D_DIRENT_HAVE_D_TYPE

CFLAGS+= -DCONFIG_WPA_CLI_EDIT=y
LIBADD+=wpacommon \
	wpaeap_peer \
	wpaeap_server \
	wpaeapol_auth \
	wpaeapol_supp \
	wpaeap_common \
	wpal2_packet \
	wparadius \
	wparsn_supp \
	wpatls \
	wpacrypto \
	wpautils
LIBADD+=	pcap util

.include <bsd.prog.mk>
