# $FreeBSD: 06404ff928e6bb57e54e17895fb8e57467adb54a $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

.PATH: ${SYSDIR}/tests/fib_lookup

KMOD=	test_lookup
SRCS=	opt_inet.h opt_inet6.h fib_lookup.c

.include <bsd.kmod.mk>
