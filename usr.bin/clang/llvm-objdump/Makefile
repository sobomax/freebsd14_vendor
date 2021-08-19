# $FreeBSD: 3a6a2f006b0b55f68de90fd32929a438de3be6ea $

PROG_CXX=	llvm-objdump

SRCDIR=		llvm/tools/llvm-objdump
SRCS+=		COFFDump.cpp
SRCS+=		ELFDump.cpp
SRCS+=		MachODump.cpp
SRCS+=		WasmDump.cpp
SRCS+=		llvm-objdump.cpp

LIBADD+=	z

.include "../llvm.prog.mk"
