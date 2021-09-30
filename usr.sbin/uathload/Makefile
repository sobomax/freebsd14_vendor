# $FreeBSD: 10a7cf47274759b44e100865f6bd315ae679837b $

PROG=	uathload
MAN=	uathload.8

SRCS=	uathload.c
FILES=	ar5523.bin
FILESDIR=	${SHAREDIR}/firmware
FILESMODE=	444

CLEANFILES=	ar5523.bin

ar5523.bin: ${SRCTOP}/sys/contrib/dev/uath/ar5523.bin.uu
	uudecode -p ${.ALLSRC} > ${.TARGET}

.include <bsd.prog.mk>
