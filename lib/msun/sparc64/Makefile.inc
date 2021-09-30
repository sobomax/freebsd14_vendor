# $FreeBSD: 052dc4dd2b26526610200619eebee57450359d47 $

ARCH_SRCS= e_sqrt.S e_sqrtf.S
LDBL_PREC= 113
SYM_MAPS+= ${.CURDIR}/sparc64/Symbol.map
