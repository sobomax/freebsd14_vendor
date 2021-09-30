/*
 * Based on the i387 version written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

#include <machine/asm.h>

RCSID("from: $NetBSD: e_remainderf.S,v 1.2 1995/05/08 23:49:47 jtc Exp $")
__FBSDID("$FreeBSD: 3b6e8858ea816f27514417773c8e5c0346fe5529 $")

ENTRY(remainderf)
	movss	%xmm0,-4(%rsp)
	movss	%xmm1,-8(%rsp)
	flds	-8(%rsp)
	flds	-4(%rsp)
1:	fprem1
	fstsw	%ax
	testw	$0x400,%ax
	jne	1b
	fstps	-4(%rsp)
	movss	-4(%rsp),%xmm0
	fstp	%st
	ret

	.section .note.GNU-stack,"",%progbits
