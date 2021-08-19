# $FreeBSD: eba6c00bd891c3d0c316236f11574960bf9ae068 $

DO32=1

.include <bsd.init.mk>

LIB=sa32
LIBSA_CPUARCH=${MACHINE_CPUARCH:C/amd64/i386/}

.PATH:	${SASRC}
.include "${SASRC}/Makefile"
