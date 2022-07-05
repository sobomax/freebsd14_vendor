# $FreeBSD: 486ca47a44be840e176a4df79fc6387e4cff565b $

MDSRCS+= \
	bcopy.S \
	bcopy_vsx.S \
	bcopy_resolver.c \
	memcpy.S \
	memcpy_vsx.S \
	memcpy_resolver.c \
	memmove.S \
	memmove_vsx.S \
	memmove_resolver.c \
	strncpy_arch_2_05.S \
	strncpy.c \
	strncpy_resolver.c \
	strcpy_arch_2_05.S \
	strcpy.c \
	strcpy_resolver.c
