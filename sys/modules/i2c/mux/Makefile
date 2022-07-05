# $FreeBSD: a972a00a3b3aff2a805c7ec945c92423f463ceb4 $

SUBDIR = \
	iicmux \
	ltc430x \
	pca954x \

.if !empty(OPT_FDT)
SUBDIR+= iic_gpiomux
.endif

.include <bsd.subdir.mk>
