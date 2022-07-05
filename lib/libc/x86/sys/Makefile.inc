# $FreeBSD: ef0bfbdbe7060e6d78d5bcb0e75687390820be27 $

.PATH:	${LIBC_SRCTOP}/x86/sys

SRCS+= \
	__vdso_gettc.c \
	pkru.c \
	sched_getcpu_x86.c

MAN+=	\
	pkru.3

.if ${MACHINE_CPUARCH} == "amd64" && ${MK_HYPERV} != "no"
CFLAGS+=	-DWANT_HYPERV
.endif
