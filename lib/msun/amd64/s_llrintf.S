#include <machine/asm.h>
__FBSDID("$FreeBSD: e810e40b640da15c1062e661b9dba9180f1aad6d $")
	
/* sizeof(long) == sizeof(long long) */
#define	fn	llrintf
#include "s_lrintf.S"
