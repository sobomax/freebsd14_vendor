#
# $FreeBSD: e4c984484edad820533a77f2b7b59aa7c8411ec6 $
#

PACKAGE=runtime
PROG=	mount_msdosfs
SRCS=	mount_msdosfs.c getmntopts.c
MAN=	mount_msdosfs.8
LIBADD=	kiconv

MOUNT=	${.CURDIR:H}/mount
CFLAGS+= -I${MOUNT}

# Needs to be dynamically linked for optional dlopen() access to
# userland libiconv
NO_SHARED?=	NO

.PATH:	${MOUNT}

.include <bsd.prog.mk>
