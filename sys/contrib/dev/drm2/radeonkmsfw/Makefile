# $FreeBSD: 44fbf9ec6e8defa492b37576b9727bb3a3809747 $

all:
	rm -f *.uu
	for file in *.bin; do \
	  uuencode -o $$file.uu $$file $$file; \
	  rm $$file; \
	done
