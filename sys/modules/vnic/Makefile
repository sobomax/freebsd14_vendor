# $FreeBSD: d1e0a8e2d9151acf19368be9e8bb0d71ca578ad7 $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

CFLAGS+=	-DFDT

SUBDIR = mrmlbus thunder_mdio thunder_bgx vnicpf vnicvf

.include <bsd.subdir.mk>
