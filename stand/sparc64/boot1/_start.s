/* $FreeBSD: 30f8019cc863e105740bf82ecaf42339a438c9e4 $ */

	.text
	.globl	_start
_start:
	call	ofw_init
	 nop
	sir
