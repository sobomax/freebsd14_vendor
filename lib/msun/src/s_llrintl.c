#include <sys/cdefs.h>
__FBSDID("$FreeBSD: 6ef83759c314264869a39ed1aec2ec7b3396a732 $");

#define type		long double
#define	roundit		rintl
#define dtype		long long
#define	fn		llrintl

#include "s_lrint.c"
