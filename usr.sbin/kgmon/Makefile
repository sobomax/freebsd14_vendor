#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: 5f6a2a37950a8d0d24cfc40f086c2e17b618e2b1 $

PROG=	kgmon
MAN=	kgmon.8
WARNS?=	2

# This program may safely be run setuid-root to allow non-root
# users to start, stop, and reset profiling buffers.
#
#BINOWN=root
#BINMODE=4555

LIBADD=	kvm

.include <bsd.prog.mk>
