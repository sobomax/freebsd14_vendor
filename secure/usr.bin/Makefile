# $FreeBSD: 62cdeb3d640b8019870cd4ee3c1d82ff601b747c $

.include <src.opts.mk>

SUBDIR=
.if ${MK_OPENSSL} != "no"
SUBDIR+=openssl
.if ${MK_OPENSSH} != "no"
SUBDIR+=scp sftp ssh ssh-add ssh-agent ssh-keygen ssh-keyscan
.endif
.endif

SUBDIR.${MK_TESTS}+= tests

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
