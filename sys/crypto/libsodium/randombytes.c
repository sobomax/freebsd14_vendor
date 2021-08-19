/* This file is in the public domain. */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 7c5f5caff5ceff45eb689cb5bc95746ad9eb1d6b $");
#include <sys/libkern.h>

#include <sodium/randombytes.h>

void
randombytes_buf(void *buf, size_t size)
{
	arc4random_buf(buf, size);
}
