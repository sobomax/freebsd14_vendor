#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 1d9cb63510f187e1d4f552cb1d07015c64e35973 $

.include <src.opts.mk>

PROG=		xinstall
PROGNAME=	install
SRCS=		xinstall.c getid.c
MAN=		install.1

.PATH:		${SRCTOP}/contrib/mtree
CFLAGS+=	-I${SRCTOP}/contrib/mtree
CFLAGS+=	-I${SRCTOP}/lib/libnetbsd
CFLAGS+=	-DHAVE_STRUCT_STAT_ST_FLAGS=1

LIBADD=	md

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
