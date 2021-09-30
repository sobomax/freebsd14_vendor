# $FreeBSD: 888fe0e9702861d99a87b075249735cbd25f943f $

NO_OBJ=t

.include <bsd.init.mk>

SUBDIR.yes=		boot1.chrp ofw uboot

.if "${MACHINE_ARCH}" == "powerpc64"
SUBDIR.${MK_FDT}+=	kboot
.endif

.include <bsd.subdir.mk>
