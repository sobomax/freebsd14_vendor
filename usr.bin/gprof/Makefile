#	@(#)Makefile	8.1 (Berkeley) 6/29/93
#	$FreeBSD: 1b540355cd45a68a634fb1a7c918b97262e7ef17 $

PROG=	gprof
SRCS=	gprof.c arcs.c dfn.c elf.c lookup.c hertz.c \
	printgprof.c printlist.c kernel.c

FILES=	gprof.flat gprof.callg
FILESDIR=	${SHAREDIR}/misc

WARNS?=	1

.include <bsd.prog.mk>
