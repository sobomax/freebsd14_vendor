#	$OpenBSD: Makefile,v 1.13 2014/05/12 19:11:19 espie Exp $
# $FreeBSD: e722d014eebf834648d7bb74487abe4bbd7bd1c7 $

# -DEXTENDED 
# 	if you want the paste & spaste macros.

.include <src.opts.mk>

PROG=	m4
CFLAGS+=-DEXTENDED -I${.CURDIR} -I${SRCTOP}/lib/libopenbsd
LIBADD=	m openbsd

NO_WMISSING_VARIABLE_DECLARATIONS=

SRCS=	eval.c expr.c look.c main.c misc.c gnum4.c trace.c parser.y tokenizer.l

WARNS=	3

tokenizer.o: parser.h

CLEANFILES+=	parser.c parser.h tokenizer.o

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
