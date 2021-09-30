# $FreeBSD: 2067dcdbbabc260385c2c9574e212f56f2eed38e $

.if !target(__<src.init.mk>__)
__<src.init.mk>__:

.if !target(buildenv)
buildenv: .PHONY
	${_+_}@env BUILDENV_DIR=${.CURDIR} ${MAKE} -C ${SRCTOP} buildenv
.endif

.endif	# !target(__<src.init.mk>__)
