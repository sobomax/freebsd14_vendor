/*	$NetBSD: ldiv.S,v 1.1 2001/06/19 00:25:04 fvdl Exp $	*/

/*-
 * Written by gcc 3.0.
 * Copy/pasted by Frank van der Linden (fvdl@wasabisystems.com)
 */

#include <machine/asm.h>
__FBSDID("$FreeBSD: f11472c671dc4fc42d9cd80f7f0e968571ff1ee8 $");

ENTRY(ldiv)
	movq	%rdi,%rax
	cqto
	idivq	%rsi
	ret
END(ldiv)

	.section .note.GNU-stack,"",%progbits
