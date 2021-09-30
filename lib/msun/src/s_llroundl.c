#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 02c44eb4bdececb2792b95393d892be6c5ea015e $");

#define type		long double
#define	roundit		roundl
#define dtype		long long
#define	DTYPE_MIN	LLONG_MIN
#define	DTYPE_MAX	LLONG_MAX
#define	fn		llroundl

#include "s_lround.c"
