# $FreeBSD: 4804f9759389497156f215afe9bf503c631860be $

PROG=	MdLoad
LIBADD=	sbuf bsdxml

MAN=


WARNS?=	4
.include "bsd.prog.mk"

test:	${PROG}
	./${PROG} md34 ../Data/disk.critter.ad0.xml
