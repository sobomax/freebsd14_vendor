/*
 * This file is in the public domain.
 * $FreeBSD: e415327af680807248dd8c5e84ce414b6f656738 $
 */

#ifndef _DEV_ZLIB_ZCALLOC_
#define _DEV_ZLIB_ZCALLOC_

#include <contrib/zlib/zutil.h>
#undef local

void *zcalloc_waitok(void *, u_int, u_int);
void *zcalloc_nowait(void *, u_int, u_int);
#endif
