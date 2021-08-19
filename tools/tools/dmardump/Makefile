# $FreeBSD: 67b32438ef95a3c915865d5b17c2b050b9a67514 $

PROG=	dmardump
SRCS=	dmardump.c
MAN=

# Pull in bits from acpidump
ACPIDUMP=${.CURDIR}/../../../usr.sbin/acpi/acpidump
.PATH:	${ACPIDUMP}
SRCS+=	acpi_user.c acpi.c
CFLAGS+= -I${ACPIDUMP}

CFLAGS+= -I${.CURDIR}/../../../sys

.include <bsd.prog.mk>
