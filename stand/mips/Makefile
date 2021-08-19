# $FreeBSD: 90341b2f7e50d7630c391084c5e0ebf504cd0df5 $

NO_OBJ=t

SUBDIR= 	uboot

#
# The BERI boot loader port works only on 64-bit MIPS; not a hard port to
# 32-bit if someone is interested.  Build on all 64-bit MIPS platforms to
# ensure it gets adequate build-test coverage.
#
.if ${MACHINE_ARCH} == "mips64"
SUBDIR+=	beri
.endif

.include <bsd.subdir.mk>
