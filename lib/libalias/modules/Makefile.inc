# $FreeBSD: 730f37435e0c0c69aa1c412bc07d48e8b2f02c04 $

.PATH: ${SRCTOP}/sys/netinet/libalias

SHLIBDIR?= /lib
LIB?=   alias_${NAME}
SHLIB_NAME?=libalias_${NAME}.so
WARNS?=	1
