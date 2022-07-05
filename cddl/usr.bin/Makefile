# $FreeBSD: 10d55215c0b3134d63df787041a16a4d9dde8006 $

.include <src.opts.mk>

SUBDIR= \
	ctfconvert \
	ctfdump \
	ctfmerge \
	${_zinject} \
	${_zstream} \
	${_ztest}

SUBDIR.${MK_TESTS}+= tests

.if ${MK_ZFS} != "no"
_zinject= zinject
_ztest=	ztest
_zstream = zstream
.endif

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
