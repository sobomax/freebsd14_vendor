# $FreeBSD: 7062c0c695426a885b9d6d795a077d4904a8b5e2 $

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

.SUFFIXES: .bdf .fnt .fnt.uu .hex
.bdf.fnt .hex.fnt:
	vtfontcvt -o ${.TARGET} ${.IMPSRC}

FILESDIR=	${SHAREDIR}/vt/fonts

.include <bsd.prog.mk>
