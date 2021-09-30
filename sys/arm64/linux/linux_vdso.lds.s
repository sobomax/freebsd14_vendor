/*
 * Stub arm64 vdso linker script.
 * LINUXTODO: update along with VDSO implementation
 *
 * $FreeBSD: 86f8de91bf60ccbe1cca4b614c57f5acc236dfa5 $
 */

SECTIONS
{
	. = . + SIZEOF_HEADERS;
	.text		: { *(.text*) }
	.rodata		: { *(.rodata*) }
	.hash		: { *(.hash) }
	.gnu.hash	: { *(.gnu.hash) }
	.dynsym		: { *(.dynsym) }
	.dynstr		: { *(.dynstr) }
	.gnu.version	: { *(.gnu.version) }
	.gnu.version_d	: { *(.gnu.version_d) }
	.gnu.version_r	: { *(.gnu.version_r) }
	.data		: { *(.data*) }
	.dynamic	: { *(.dynamic) }
}
