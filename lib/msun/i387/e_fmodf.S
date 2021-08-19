/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

#include <machine/asm.h>
__FBSDID("$FreeBSD: e269447226e9f8d8779f1b6fcacce739bfaf39d4 $")

ENTRY(fmodf)
	flds	8(%esp)
	flds	4(%esp)
1:	fprem
	fstsw	%ax
	sahf
	jp	1b
	fstp	%st(1)
	ret
END(fmodf)

	.section .note.GNU-stack,"",%progbits
