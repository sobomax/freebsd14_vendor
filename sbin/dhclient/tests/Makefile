# $FreeBSD: 822699c9dd01d4b8a68063d75fecbf80b63113ef $

.PATH:	${.CURDIR:H}

PLAIN_TESTS_C=				option-domain-search_test
SRCS.option-domain-search_test=		alloc.c convert.c hash.c options.c \
					tables.c fake.c option-domain-search.c
CFLAGS.option-domain-search_test+=	-I${.CURDIR:H}
LIBADD.option-domain-search_test=	util

WARNS?=	2

.include <bsd.test.mk>
