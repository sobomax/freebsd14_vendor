#	@(#)Makefile	8.1 (Berkeley) 6/5/93
# $FreeBSD: d6c1e62026931dff2a8c6c45b79ec413548169f8 $

.PATH: ${.CURDIR:H}/dump

PACKAGE=runtime
PROG=	restore
LINKS=	${BINDIR}/restore ${BINDIR}/rrestore
MAN=	restore.8
MLINKS=	restore.8 rrestore.8
SRCS=	main.c interactive.c restore.c dirs.c symtab.c tape.c utilities.c \
	dumprmt.c
WARNS?=	2
CFLAGS+= -DRRESTORE -D_ACL_PRIVATE

.include <bsd.prog.mk>
