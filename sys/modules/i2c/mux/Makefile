# $FreeBSD: 8e228a7a7fefa18757845ef073904c68e10065c3 $

SUBDIR = \
	iicmux \
	ltc430x \

.if !empty(OPT_FDT)
SUBDIR+= iic_gpiomux
.endif

.include <bsd.subdir.mk>
