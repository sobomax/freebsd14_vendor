#	from @(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: 3e3dede8a45e597f5f627d8f0e93fc7bb694d5d0 $

# gmon sources
.PATH: ${LIBC_SRCTOP}/gmon

SRCS+=	gmon.c mcount.c

SYM_MAPS+=${LIBC_SRCTOP}/gmon/Symbol.map

MAN+=	moncontrol.3

MLINKS+=moncontrol.3 monstartup.3

# mcount cannot be compiled with profiling
mcount.po: mcount.o
	cp mcount.o mcount.po
