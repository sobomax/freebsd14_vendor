# $FreeBSD: 0b0a03637f855f21020bbef39a144c4169ca3b22 $

.include <src.opts.mk>

SUBDIR=	digest-service ipropd-master ipropd-slave hprop hpropd kdc \
	kdigest kfd kimpersonate kpasswdd kcm
SUBDIR_PARALLEL=

.if ${MK_GSSAPI} != "no"
SUBDIR+=	kadmind
.endif

.include <bsd.subdir.mk>
