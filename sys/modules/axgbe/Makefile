# $FreeBSD: 9bf694ef2e3fa7a9feaf17867481202ff3957e5a $

.if ${MACHINE_CPUARCH} == "aarch64"
SUBDIR= if_axa
.elif ${MACHINE_CPUARCH} == "amd64"
SUBDIR= if_axp
.endif

.include <bsd.subdir.mk>
