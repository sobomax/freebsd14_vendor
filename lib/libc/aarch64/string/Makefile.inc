# $FreeBSD: 5ce355f8b0c1ff8b4b7c66db0c7eb2239907454a $
#
# String handling from the Cortex Strings library
# https://git.linaro.org/toolchain/cortex-strings.git
#

.PATH: ${SRCTOP}/contrib/cortex-strings/src/aarch64

MDSRCS+= \
	memchr.S \
	memcmp.S \
	memcpy.S \
	memmove.S \
	memset.S \
	strchr.S \
	strcmp.S \
	strcpy.S \
	strlen.S \
	strncmp.S \
	strnlen.S
