#! /bin/sh
# ex:ts=8

# $FreeBSD: 05df4d02b42c2aba94f0bc99b062f1a74701b2db $

case "$1" in
	*.zip)
		exec unzip -c "$1" 2>/dev/null
		;;
	*.Z)
		exec uncompress -c "$1"	2>/dev/null
		;;
	*.gz)
		exec gzip -d -c "$1"	2>/dev/null
		;;
	*.bz2)
		exec bzip2 -d -c "$1"	2>/dev/null
		;;
	*.xz)
		exec xz -d -c "$1"	2>/dev/null
		;;
	*.lzma)
		exec lzma -d -c "$1"	2>/dev/null
		;;
	*.zst)
		exec zstd -d -q -c "$1"	2>/dev/null
		;;
esac
