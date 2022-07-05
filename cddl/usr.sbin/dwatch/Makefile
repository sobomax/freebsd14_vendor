# $FreeBSD: aa2873ec4681ffe971afafdc2f740d0866f9ae61 $

.include <src.opts.mk>

PACKAGE=	dwatch

SUBDIR= libexec

.if ${MK_EXAMPLES} != "no"
SUBDIR+= examples
.endif

SCRIPTS= dwatch

MAN= dwatch.1

.include <bsd.prog.mk>
