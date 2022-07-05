# $FreeBSD: 096beeb96a62aae9b6e956914aadb347e0a5fa7c $

.include <bsd.own.mk>

.PATH: ${.CURDIR}

ESDBDIR?= /usr/share/i18n/esdb
# mkesdb builds as part of bootstrap-tools and can therefore be found in $PATH
MKESDB?=	mkesdb
