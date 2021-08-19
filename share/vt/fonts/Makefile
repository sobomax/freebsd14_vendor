# $FreeBSD: 685f0f5ae2bd7f214c6f7f6acff2b72355262c57 $

FONTS=	gallant.fnt \
	terminus-b32.fnt \
	tom-thumb.fnt \
	vgarom-8x8.fnt \
	vgarom-8x14.fnt \
	vgarom-8x16.fnt \
	vgarom-16x32.fnt \
	vgarom-thin-8x8.fnt \
	vgarom-thin-8x16.fnt
FILES=	${FONTS} INDEX.fonts

CLEANFILES+=	${FONTS}

.SUFFIXES: .fnt .fnt.uu .hex
.hex.fnt:
	vtfontcvt ${.IMPSRC} ${.TARGET}

FILESDIR=	${SHAREDIR}/vt/fonts

.include <bsd.prog.mk>
