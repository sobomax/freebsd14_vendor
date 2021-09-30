# $FreeBSD: 239cd7b8d1c65c7c26b96f3a7ada9f0708217e1f $
#
# libc sources related to security

.PATH: ${LIBC_SRCTOP}/secure

# Sources common to both syscall interfaces:
SRCS+=	stack_protector.c \
	stack_protector_compat.c

SYM_MAPS+=    ${LIBC_SRCTOP}/secure/Symbol.map
