# $FreeBSD: 21978232a73f8b33d4dca6d3561bb115e1f62758 $

.PATH: ${SRCTOP}/sys/net80211
.PATH: ${SRCTOP}/sys/crypto/rijndael

KMOD=	wlan_ccmp
SRCS=	ieee80211_crypto_ccmp.c
SRCS+=	rijndael-alg-fst.c rijndael-api.c
SRCS+=	opt_wlan.h

.include <bsd.kmod.mk>
