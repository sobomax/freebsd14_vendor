# $FreeBSD: a0f933333320429e72624175e629926574469c94 $

.include <src.opts.mk>

PACKAGE=	newsyslog

CONFS=	newsyslog.conf
PROG=	newsyslog
MAN=	newsyslog.8 newsyslog.conf.5
SRCS=	newsyslog.c ptimes.c
LIBADD=	sbuf

HAS_TESTS=
SUBDIR.${MK_TESTS}+= tests
SUBDIR+=	newsyslog.conf.d

.include <bsd.prog.mk>
