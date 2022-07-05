# $FreeBSD: cbb2c2a7175fdef194307d6af6f08e86f9072e98 $

.include <src.opts.mk>

# These have to be built in order.
SUBDIR=		libllvm
.if ${MK_CLANG} != "no" || ${MK_LLDB} != "no"
SUBDIR+=	libclang
SUBDIR+=	headers
.endif
.if ${MK_LLDB} != "no"
SUBDIR+=	liblldb
.endif

.include <bsd.subdir.mk>
