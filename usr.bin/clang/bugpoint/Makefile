# $FreeBSD: c68f68ab54158db23bbd8b038c48f2bede0957c4 $

PROG_CXX=	bugpoint

SRCDIR=		llvm/tools/bugpoint
SRCS+=		BugDriver.cpp
SRCS+=		CrashDebugger.cpp
SRCS+=		ExecutionDriver.cpp
SRCS+=		ExtractFunction.cpp
SRCS+=		FindBugs.cpp
SRCS+=		Miscompilation.cpp
SRCS+=		OptimizerDriver.cpp
SRCS+=		ToolRunner.cpp
SRCS+=		bugpoint.cpp

LIBADD+=	z

.include "../llvm.prog.mk"
