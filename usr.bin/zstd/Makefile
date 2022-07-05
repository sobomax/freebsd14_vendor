# $FreeBSD: 4ecf16f07b400f77feeb2755f03de3c80241de8d $

PROG=	zstd
SRCS=	\
	benchfn.c \
	benchzstd.c \
	datagen.c \
	dibio.c \
	fileio.c \
	timefn.c \
	util.c \
	zstdcli.c

CFLAGS+=	-I${SRCTOP}/sys/contrib/zstd/programs \
		-I${SRCTOP}/sys/contrib/zstd/lib/common \
		-I${SRCTOP}/sys/contrib/zstd/lib/compress \
		-I${SRCTOP}/sys/contrib/zstd/lib/dictBuilder \
		-I${SRCTOP}/sys/contrib/zstd/lib \
		-DXXH_NAMESPACE=ZSTD_ \
		-DHAVE_THREAD=1 \
		-DZSTD_MULTITHREAD=1
LINKS=	${BINDIR}/zstd ${BINDIR}/unzstd \
	${BINDIR}/zstd ${BINDIR}/zstdcat \
	${BINDIR}/zstd ${BINDIR}/zstdmt
MLINKS=	zstd.1 unzstd.1 \
	zstd.1 zstdcat.1 \
	zstd.1 zstdmt.1

CSTD=c11
WARNS?=	2
LIBADD=	zstd
.PATH: ${SRCTOP}/sys/contrib/zstd/programs

.include <bsd.prog.mk>
