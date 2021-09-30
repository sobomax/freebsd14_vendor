# $FreeBSD: bf7b0233b9198d94fab8e84f48581b7192194e09 $

PROG=	fsx

MAN=

NO_WMISSING_VARIABLE_DECLARATIONS=

.include <bsd.prog.mk>

# Don't require static declarations.  It's line noise in a single-file program.
CWARNFLAGS+= -Wno-strict-prototypes -Wno-missing-prototypes
