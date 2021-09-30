# $FreeBSD: e895b3f8549812393ee8b81c0e64d5b69bd2e426 $

all:	vm86_test

vm86_test:	vm86_test_asm.s vm86_test.c
	$(CC) -Wall -Wextra -g -m32 -O -o vm86_test vm86_test_asm.s vm86_test.c

