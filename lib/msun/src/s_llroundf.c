#include <sys/cdefs.h>
__FBSDID("$FreeBSD: c037a18d5708af3fd3bc95adaff884103d85e7a9 $");

#define type		float
#define	roundit		roundf
#define dtype		long long
#define	DTYPE_MIN	LLONG_MIN
#define	DTYPE_MAX	LLONG_MAX
#define	fn		llroundf

#include "s_lround.c"
