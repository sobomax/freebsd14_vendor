#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 0847a2f9fb9c5e3b4b2a1d01b4a7dd85fec2b371 $

.include <src.opts.mk>

PROG=	indent
SRCS=	indent.c io.c lexi.c parse.c pr_comment.c args.c

NO_WMISSING_VARIABLE_DECLARATIONS=

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
