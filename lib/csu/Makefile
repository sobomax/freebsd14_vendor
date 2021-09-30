# $FreeBSD: 3f45c5eb3afcb2c773865f9362ea7fd698ad4da9 $

.include <src.opts.mk>

.if exists(${.CURDIR}/${MACHINE_ARCH:S/powerpc64le/powerpc64/})
SUBDIR+= ${MACHINE_ARCH:S/powerpc64le/powerpc64/}
.else
SUBDIR+= ${MACHINE_CPUARCH}
.endif

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.subdir.mk>
