# $FreeBSD: 6500e91eaac1724139c9d2f1695d066f6068dab5 $

.include <bsd.compiler.mk>

MK_PIE:=	no	# Explicit libXXX.a references

.if ${COMPILER_TYPE} == "clang"
DEBUG_FILES_CFLAGS= -gline-tables-only
.else
DEBUG_FILES_CFLAGS= -g1
.endif

WARNS?=		0
