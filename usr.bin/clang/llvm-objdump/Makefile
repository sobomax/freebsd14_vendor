# $FreeBSD: 34b01504271812176c74d38a104641b69bac49b2 $

PROG_CXX=	llvm-objdump

SRCDIR=		llvm/tools/llvm-objdump
SRCS+=		COFFDump.cpp
SRCS+=		ELFDump.cpp
SRCS+=		MachODump.cpp
SRCS+=		WasmDump.cpp
SRCS+=		XCOFFDump.cpp
SRCS+=		llvm-objdump.cpp

LIBADD+=	z

.include "../llvm.prog.mk"
