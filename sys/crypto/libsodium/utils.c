/* This file is in the public domain. */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 4743ba296e09553843da266614a3dffae0085006 $");
#include <sys/types.h>
#include <sys/systm.h>

#include <sodium/utils.h>

void
sodium_memzero(void *b, size_t n)
{
	explicit_bzero(b, n);
}
