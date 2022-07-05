# $FreeBSD: 4aba6f83137f448442f378cd8587c92eda746de5 $
.PATH:	${SRCTOP}/sys/compat/linuxkpi/common/src

KMOD=	linuxkpi_wlan
SRCS=	linux_80211.c \
	linux_80211_macops.c

SRCS+=	opt_wlan.h
SRCS+=	${LINUXKPI_GENSRCS}

CFLAGS+= -I${SRCTOP}/sys/compat/linuxkpi/common/include

EXPORT_SYMS=	YES

.include <bsd.kmod.mk>
