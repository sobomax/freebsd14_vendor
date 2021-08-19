# $FreeBSD: 647f073888902712cca77cf96fd3265a425694a6 $

.include <src.opts.mk>

SUBDIR= libexec

.if ${MK_EXAMPLES} != "no"
SUBDIR+= examples
.endif

SCRIPTS= dwatch

MAN= dwatch.1

.include <bsd.prog.mk>
