#include <machine/asm.h>
__FBSDID("$FreeBSD: 25bbd5730ae9af7f1df0315f35afeacd32604ffb $");

	.section .init,"ax",%progbits
	ldmea	fp, {fp, sp, pc}
	mov	pc, lr

	.section .fini,"ax",%progbits
	ldmea	fp, {fp, sp, pc}
	mov	pc, lr

	.section .note.GNU-stack,"",%progbits
