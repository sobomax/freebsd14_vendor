# $FreeBSD: 12c9cbd2618921a749d3e38a42625f60c83eacab $

.PATH: ${SRCTOP}/sys/dev/bktr

KMOD=	bktr_mem 
SRCS=	bktr_mem.c
EXPORT_SYMS=	bktr_has_stored_addresses	\
		bktr_store_address		\
		bktr_retrieve_address

.include <bsd.kmod.mk>
