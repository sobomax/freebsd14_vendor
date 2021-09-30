# $FreeBSD: 14f0845595c96e03c989ccedad4074662796eec4 $

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
	strncpy_resolver.c

# XXX Port strcpy to LE.
.if ${MACHINE_ARCH} == "powerpc64"
MDSRCS+= \
	strcpy_arch_2_05.S \
	strcpy.c \
	strcpy_resolver.c
.endif
