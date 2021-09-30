# $FreeBSD: ee73b23aadcf19e2f382ca76a24f8f728fd5733b $

.if ${.MAKE.DEPENDFILE:M*.${MACHINE}} == ""
# by default only MACHINE0 does updates
UPDATE_DEPENDFILE_MACHINE?= ${MACHINE0:U${MACHINE}}
.if ${MACHINE} != ${UPDATE_DEPENDFILE_MACHINE}
UPDATE_DEPENDFILE= no
.endif
.endif

NOSSPPICO?= .nossppico
OBJ_EXTENSIONS+= ${NOSSPPICO}

CFLAGS+= ${CFLAGS_LAST}
CXXFLAGS+= ${CXXFLAGS_LAST}
LDFLAGS+= ${LDFLAGS_LAST}

CLEANFILES+= .depend

# handy for debugging
.SUFFIXES:  .S .c .cc .cpp .cpp-out


.S.cpp-out .c.cpp-out: .NOMETA
	@${CC} -E ${CFLAGS} ${.IMPSRC} | grep -v '^[[:space:]]*$$'

.cc.cpp-out: .NOMETA
	@${CXX} -E ${CXXFLAGS} ${.IMPSRC} | grep -v '^[[:space:]]*$$'
