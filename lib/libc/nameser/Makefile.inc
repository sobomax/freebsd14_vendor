# $FreeBSD: cbb21220040bf79f28882f4340604fcc25bd1c2f $

# nameser sources
.PATH: ${LIBC_SRCTOP}/nameser

SRCS+=	ns_name.c ns_netint.c ns_parse.c ns_print.c ns_samedomain.c ns_ttl.c

SYM_MAPS+= ${LIBC_SRCTOP}/nameser/Symbol.map
