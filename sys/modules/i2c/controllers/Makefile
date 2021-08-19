# $FreeBSD: 8773bc09c030fb906f30ebd5966885c551b35bc5 $

SUBDIR = alpm amdpm amdsmb ichiic ichsmb intpm ismt nfsmb viapm lpbb pcf

.if ${MACHINE_ARCH} == "i386" || ${MACHINE_ARCH} == "amd64"
SUBDIR += imcsmb
.endif

.include <bsd.subdir.mk>
