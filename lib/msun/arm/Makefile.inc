# $FreeBSD: 6ebf21a9c3c5dec11535b0ccda8f01a965bb9401 $

LDBL_PREC = 53
SYM_MAPS += ${.CURDIR}/arm/Symbol.map

.if ${MACHINE_ARCH:Marmv[67]*} && defined(CPUTYPE) && ${CPUTYPE:M*soft*} != ""
ARCH_SRCS = fenv-softfp.c fenv-vfp.c
.endif

CFLAGS.fenv-vfp.c=	-mfpu=vfp -mfloat-abi=softfp
