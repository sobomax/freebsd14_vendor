# $FreeBSD: 375b8045e81f68dc079ac36e0becf7ef8a1da7cf $

.include <src.opts.mk>

.PATH: ${SRCTOP}/usr.bin/lastcomm

PROG=	sa
MAN=	sa.8
SRCS=	main.c db.c pdb.c usrdb.c readrec.c

PACKAGE=acct

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
