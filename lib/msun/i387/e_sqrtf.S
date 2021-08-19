/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

#include <machine/asm.h>

__FBSDID("$FreeBSD: 75a9ae2770ab67c8508390543d5c036f1e777f22 $");
/* RCSID("$NetBSD: e_sqrtf.S,v 1.2 1995/05/08 23:50:14 jtc Exp $") */

ENTRY(sqrtf)
	flds	4(%esp)
	fsqrt
	ret
END(sqrtf)

	.section .note.GNU-stack,"",%progbits
