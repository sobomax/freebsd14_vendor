#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: b6ad018e03ac89d1cd603a64c5e5efc876a0ea88 $

.PATH: ${SRCTOP}/libexec/tftpd

PROG=	tftp
SRCS=	main.c tftp-file.c tftp-io.c tftp-options.c tftp-transfer.c
SRCS+=	tftp-utils.c tftp.c
CFLAGS+=-I${SRCTOP}/libexec/tftpd

LIBADD=	edit

.include <bsd.prog.mk>
