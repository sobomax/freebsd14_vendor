# $FreeBSD: be86b33aa6755808caba6bacc81dbc3378426601 $

.PATH: ${SRCTOP}/sys/contrib/dev/qat

KMOD=	qat_dh895xccfw
IMG1=	qat_895xcc
IMG2=	qat_895xcc_mmp

FIRMWS=	${IMG1}.bin:${KMOD}:111 ${IMG2}.bin:${IMG2}:111

.include <bsd.kmod.mk>
