# $FreeBSD: abb8ffd8133edf5841411e7168e71c2626d4f0d4 $

PACKAGE=examples
FILESDIR=${SHAREDIR}/examples/libusb20
TARGETS=	bulk control
CFLAGS+=	-Wall

all: $(TARGETS)

bulk: bulk.o util.o
	$(CC) $(CFLAGS) -o bulk bulk.o util.o -lusb

control: control.o util.o
	$(CC) $(CFLAGS) -o control control.o util.o -lusb

clean:
	rm -f $(TARGETS) *.o *~
