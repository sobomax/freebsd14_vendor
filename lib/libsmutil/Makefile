# $FreeBSD: 7bbd21e21bbb75cf6bfb48b37e7f1eb4d37e1744 $

.include <src.opts.mk>

PACKAGE=lib${LIB}
SENDMAIL_DIR=${SRCTOP}/contrib/sendmail
.PATH:	${SENDMAIL_DIR}/libsmutil

CFLAGS+=-I${SENDMAIL_DIR}/src -I${SENDMAIL_DIR}/include -I.
CFLAGS+=-DNEWDB -DNIS -DMAP_REGEX -DNOT_SENDMAIL

.if ${MK_OPENSSL} != "no"
# STARTTLS support
CFLAGS+=-DSTARTTLS
.endif

# User customizations to the sendmail build environment
CFLAGS+=${SENDMAIL_CFLAGS}

WARNS?=	2

LIB=	smutil

SRCS+=	sm_os.h
SRCS+=	debug.c err.c lockfile.c safefile.c snprintf.c cf.c
CLEANFILES+=sm_os.h

INTERNALLIB=

sm_os.h: ${SENDMAIL_DIR}/include/sm/os/sm_os_freebsd.h .NOMETA
	ln -sf ${.ALLSRC} ${.TARGET}

.include <bsd.lib.mk>
