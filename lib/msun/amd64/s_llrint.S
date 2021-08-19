#include <machine/asm.h>
__FBSDID("$FreeBSD: ab098465cd578eac7644eaedbc1e8b91c6af16ce $")
	
/* sizeof(long) == sizeof(long long) */
#define	fn	llrint
#include "s_lrint.S"
