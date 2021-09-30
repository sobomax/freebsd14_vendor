/* $FreeBSD: 996e167ac1d96cf8a4d73ab5690055246d08a335 $ */
#define __IEEEFP_NOINLINES__ 1
#include <ieeefp.h>

fp_except_t fpsetmask(fp_except_t m)
{
	return (__fpsetmask(m));
}
