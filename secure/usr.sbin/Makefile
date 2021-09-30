# $FreeBSD: f6b22d86da3d24bf6fdae9ebf54aa2969e0aae2e $

.include <src.opts.mk>

SUBDIR= 
.if ${MK_OPENSSH} != "no"
SUBDIR+=sshd
.endif

SUBDIR.${MK_TESTS}+= tests

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
