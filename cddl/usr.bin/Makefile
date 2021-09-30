# $FreeBSD: 5c2595df1c9f409e1715a06705153aa1fc407878 $

.include <src.opts.mk>

SUBDIR= \
	ctfconvert \
	ctfdump \
	ctfmerge \
	${_zinject} \
	${_zstream} \
	${_zstreamdump} \
	${_ztest}

SUBDIR.${MK_TESTS}+= tests

.if ${MK_ZFS} != "no"
_zinject= zinject
_ztest=	ztest
_zstream = zstream
_zstreamdump = zstreamdump
.endif

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
