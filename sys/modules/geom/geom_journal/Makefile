# $FreeBSD: 89298a8180d73a58f96cd7eaa847ca91098d92a9 $

.PATH: ${SRCTOP}/sys/geom/journal

KMOD=	geom_journal
SRCS=	g_journal.c
SRCS+=	g_journal_ufs.c
SRCS+=	vnode_if.h

.include <bsd.kmod.mk>
