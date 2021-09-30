# $FreeBSD: 284900c1bc0572bcba60f9a0f81d0067224f6e11 $

.include <bsd.own.mk>

CSMAPPERDIR?= /usr/share/i18n/csmapper
.if ${MK_STAGING} == "yes"
MKCSMAPPER= ${STAGE_HOST_OBJTOP}/usr/bin/mkcsmapper_static
.endif
MKCSMAPPER?= ${.OBJDIR:H:H:H}/usr.bin/mkcsmapper_static/mkcsmapper_static
