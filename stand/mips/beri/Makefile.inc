# $FreeBSD: a95ca3dc18618dd2dfbccde91c4469df93e0804f $

LDFLAGS+=	-nostdlib

# BERI boot loader is built with '-mno-abicalls' flag,
# which is incompatible with PIE
MK_PIE=		no

.include "../Makefile.inc"
