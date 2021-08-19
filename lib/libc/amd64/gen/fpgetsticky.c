/* $FreeBSD: c3acb91d63e5c796c562a8414c9a3cdd67762d6b $ */
#define __IEEEFP_NOINLINES__ 1
#include <ieeefp.h>

fp_except_t fpgetsticky(void)
{
	return __fpgetsticky();
}
