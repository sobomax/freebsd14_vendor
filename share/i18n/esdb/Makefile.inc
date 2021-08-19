# $FreeBSD: ab61d2cee22f19a6a7f4ebd5b39c601cb33e3b3e $

.include <bsd.own.mk>

.PATH: ${.CURDIR}

ESDBDIR?= /usr/share/i18n/esdb
.if ${MK_STAGING} == "yes"
MKESDB= ${STAGE_HOST_OBJTOP}/usr/bin/mkesdb_static
.endif
MKESDB?= ${.OBJDIR:H:H:H}/usr.bin/mkesdb_static/mkesdb_static
