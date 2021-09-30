#	@(#)Makefile	8.1 (Berkeley) 6/9/93
# $FreeBSD: acf83349542869cb45608ee0219d96dc69830f6f $

PROG=	tset
SRCS=	map.c misc.c set.c term.c tset.c wrterm.c

LIBADD=	ncursesw
LINKS=	${BINDIR}/tset ${BINDIR}/reset
MLINKS=	tset.1 reset.1

.include <bsd.prog.mk>
