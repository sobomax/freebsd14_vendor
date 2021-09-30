# $FreeBSD: e2e75c70603b1770de76c5f35d433d0f16004c08 $
#
# libc sources related to security

.PATH: ${LIBC_SRCTOP}/secure

# Sources common to both syscall interfaces:
SRCS+=	stack_protector.c
.if ${MK_SYMVER} == yes
SRCS+=	stack_protector_compat.c
.endif

SYM_MAPS+=    ${LIBC_SRCTOP}/secure/Symbol.map
