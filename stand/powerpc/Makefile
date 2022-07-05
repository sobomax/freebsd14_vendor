# $FreeBSD: a16d3933ff7e52655e5a0449f3e6e7b463f28dfb $

NO_OBJ=t

.include <bsd.init.mk>

SUBDIR.yes=		boot1.chrp ofw

.if "${MACHINE_ARCH}" != "powerpc64le"
SUBDIR.${MK_FDT}+=	uboot
.endif

.if "${MACHINE_ARCH}" == "powerpc64"
SUBDIR.${MK_FDT}+=	kboot
.endif

.include <bsd.subdir.mk>
