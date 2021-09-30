# $FreeBSD: 7e2a2f87b33a80b33fc9a9f76c8a1d0f2e3cd051 $

.PATH: ${SRCTOP}/sys/amd64/sgx

KMOD=	sgx
SRCS=	sgx.c sgxvar.h sgx_support.S
SRCS+=	opt_hwpmc_hooks.h opt_kstack_pages.h
DPSRCS=	assym.inc

sgx_support.o:  assym.inc
	${CC} -c -x assembler-with-cpp -DLOCORE ${CFLAGS} \
	    ${.IMPSRC} -o ${.TARGET}

.include <bsd.kmod.mk>
