#!/bin/sh
#
# $FreeBSD: b38245807e0425f2baff74c45497f2b983e9a706 $

sysctl debug.redzone.malloc_underflow=1
sysctl debug.redzone.malloc_overflow=1
sysctl debug.redzone.realloc_smaller_underflow=1
sysctl debug.redzone.realloc_smaller_overflow=1
sysctl debug.redzone.realloc_bigger_underflow=1
sysctl debug.redzone.realloc_bigger_overflow=1
