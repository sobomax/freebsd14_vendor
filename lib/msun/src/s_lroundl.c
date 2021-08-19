#include <sys/cdefs.h>
__FBSDID("$FreeBSD: e410827e2622014df79e30387f4b8995d97b7ec3 $");

#define type		long double
#define	roundit		roundl
#define dtype		long
#define	DTYPE_MIN	LONG_MIN
#define	DTYPE_MAX	LONG_MAX
#define	fn		lroundl

#include "s_lround.c"
