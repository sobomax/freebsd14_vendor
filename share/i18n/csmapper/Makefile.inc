# $FreeBSD: 72473764f31332e6030a237b6ed76ce38836c55f $

.include <bsd.own.mk>

CSMAPPERDIR?= /usr/share/i18n/csmapper
# mkcsmapper builds as part of bootstrap-tools and can therefore be found in $PATH
MKCSMAPPER?=	mkcsmapper
