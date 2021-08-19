/* $FreeBSD: 03bb2741ef6ab399136ac82b8d76767a20235221 $ */
#define __IEEEFP_NOINLINES__ 1
#include <ieeefp.h>

fp_except_t fpgetmask(void)
{
	return __fpgetmask();
}
