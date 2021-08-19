/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

#include <machine/asm.h>

__FBSDID("$FreeBSD: fc75674115d9b366a372f1fefcf7eac27e58a42f $");
/* RCSID("$NetBSD: e_log10f.S,v 1.1 1996/07/03 16:50:22 jtc Exp $") */

ENTRY(log10f)
	fldlg2
	flds	4(%esp)
	fyl2x
	ret
END(log10f)

	.section .note.GNU-stack,"",%progbits
