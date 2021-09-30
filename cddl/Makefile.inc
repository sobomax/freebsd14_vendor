# $FreeBSD: 687068d599e80f33e63292b7c0222cb4b485a6fc $

OPENSOLARIS_USR_DISTDIR= ${.CURDIR}/../../../cddl/contrib/opensolaris
OPENSOLARIS_SYS_DISTDIR= ${.CURDIR}/../../../sys/cddl/contrib/opensolaris

IGNORE_PRAGMA=	YES

CFLAGS+=	-DNEED_SOLARIS_BOOLEAN

# Do not lint the CDDL stuff. It is all externally maintained and
# lint output is wasteful noise here.

NO_LINT=
