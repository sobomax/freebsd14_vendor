# $FreeBSD: b4633599167113a15e94bf3d5f4fed319cdfdeb9 $

.include <src.opts.mk>

SUBDIR=	${_ggatec} \
	${_ggated} \
	ggatel

.if ${MK_LIBTHR} != "no"
_ggatec=	ggatec
_ggated=	ggated
.endif

.include <bsd.subdir.mk>
