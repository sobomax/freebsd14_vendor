# $FreeBSD: 61637b85d4ba3c05d66405f38004d852fe622651 $

PROG=	MdLoad
LIBADD=	sbuf bsdxml
NO_OBJ=	t

MAN=


WARNS?=	4
.include "bsd.prog.mk"

test:	${PROG}
	./${PROG} md34 ../Data/disk.critter.ad0.xml
