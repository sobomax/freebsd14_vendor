/*
 * This file is in the public domain.  Originally written by Garrett
 * A. Wollman.
 *
 * $FreeBSD: f489d31c2335332eb7226f37bd4f3b418d2fcac2 $
 */
#include "block_abi.h"
#define I_AM_QSORT_R
#include "qsort.c"

typedef DECLARE_BLOCK(int, qsort_block, const void *, const void *);

void
qsort_b(void *base, size_t nel, size_t width, qsort_block compar)
{
	qsort_r(base, nel, width, compar,
		(int (*)(void *, const void *, const void *))
		GET_BLOCK_FUNCTION(compar));
}
