#	@(#)Makefile.inc	5.1 (Berkeley) 5/11/90
# $FreeBSD: de7ed1c2f55cfd0b2cd8be73ddad563a255f298f $

BINDIR?=	/usr/sbin

NO_WCAST_ALIGN=
CWARNFLAGS.clang+=	-Wno-incompatible-pointer-types-discards-qualifiers
CWARNFLAGS.gcc+=	-Wno-error=discarded-qualifiers
