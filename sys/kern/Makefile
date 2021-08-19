#	@(#)Makefile	8.2 (Berkeley) 3/21/94
# $FreeBSD: 5e14eb2d9ed270930d181735de2ba42741004874 $
#
# Makefile for init_sysent

SRCS+=		capabilities.conf
SYSENT_CONF=
GENERATED=	init_sysent.c			\
		syscalls.c			\
		systrace_args.c			\
		${SYSDIR}/sys/syscall.h		\
		${SYSDIR}/sys/syscall.mk	\
		${SYSDIR}/sys/sysproto.h

.include "../conf/sysent.mk"
