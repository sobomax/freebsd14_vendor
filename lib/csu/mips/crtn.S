#include <machine/asm.h>
__FBSDID("$FreeBSD: ad81a7b5f3c69ede6a1d3f849311bc2f178c0154 $");

#ifndef __clang__
	.gnu_attribute 4, 0
#endif
	.section .init,"ax",%progbits
	.align 4
	.set noreorder
#if defined(__ABICALLS__) && (defined(__mips_n32) || defined(__mips_n64))
	REG_L	gp, CALLFRAME_GP(sp)
#endif
	REG_L	ra, CALLFRAME_RA(sp)
	jr	ra
	PTR_ADDU sp, sp, CALLFRAME_SIZ
	.set reorder

	.section .fini,"ax",%progbits
	.align 4
	.set noreorder
#if defined(__ABICALLS__) && (defined(__mips_n32) || defined(__mips_n64))
	REG_L	gp, CALLFRAME_GP(sp)
#endif
	REG_L	ra, CALLFRAME_RA(sp)
	jr	ra
	PTR_ADDU sp, sp, CALLFRAME_SIZ
	.set reorder
