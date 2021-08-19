# $FreeBSD: 40f3828ec7d44bb84e3ab79ef6162dc9687f0d40 $

# we don't do anything in these dirs
# they are just for triggering building of other things

UPDATE_DEPENDFILE= no

.if !target(all)
all:
	@echo Done!
.endif


