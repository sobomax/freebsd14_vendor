# $FreeBSD: be8697fbc6095cd0629eabc64ffde0fbb4bd4f97 $

SUBDIR=	ncurses form menu panel

SUBDIR_PARALLEL=

.for subdir in ${SUBDIR:Nncurses*}
SUBDIR_DEPEND_${subdir}=	ncurses
.endfor

.include <bsd.subdir.mk>
