# $FreeBSD: fe73d1ef6aea46f90abc9c0513c596915bd762e7 $

.PATH: ${SRCTOP}/sys/contrib/dev/qat

KMOD=	qat_c2xxxfw
IMG1=	mof_firmware_c2xxx
IMG2=	mmp_firmware_c2xxx

FIRMWS=	${IMG1}.bin:${KMOD}:111 ${IMG2}.bin:${IMG2}:111

.include <bsd.kmod.mk>
