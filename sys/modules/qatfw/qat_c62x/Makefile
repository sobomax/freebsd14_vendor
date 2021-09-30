# $FreeBSD: e2dc67f54319a56108fe9d983a702c8e0153a421 $

.PATH: ${SRCTOP}/sys/contrib/dev/qat

KMOD=	qat_c62xfw
IMG1=	qat_c62x
IMG2=	qat_c62x_mmp

FIRMWS=	${IMG1}.bin:${KMOD}:111 ${IMG2}.bin:${IMG2}:111

.include <bsd.kmod.mk>
