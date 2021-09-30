#	$FreeBSD: 58762a731c244d9aa441fa04cd948df6b3706812 $
#	$OpenBSD: Makefile,v 1.2 2006/11/26 11:31:09 deraadt Exp $

.include <src.opts.mk>

PROG=	dc
SRCS=	dc.c bcode.c inout.c mem.c stack.c
LIBADD=	crypto

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests

.include <bsd.prog.mk>
