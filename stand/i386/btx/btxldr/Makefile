# $FreeBSD: 6a112768f0b60342542772adcdc866cf257c4350 $

.include <bsd.init.mk>

PROG=	btxldr
INTERNALPROG=
SRCS=	btxldr.S

CFLAGS+=-DLOADER_ADDRESS=${LOADER_ADDRESS}
CFLAGS+=-I${BOOTSRC}/i386/common

.if defined(BTXLDR_VERBOSE)
CFLAGS+=-DBTXLDR_VERBOSE
.endif

ORG=${LOADER_ADDRESS}
LDFLAGS+=${LDFLAGS_BIN}

.include <bsd.prog.mk>

# XXX: clang integrated-as doesn't grok .codeNN directives yet
CFLAGS.btxldr.S=	${CLANG_NO_IAS}
