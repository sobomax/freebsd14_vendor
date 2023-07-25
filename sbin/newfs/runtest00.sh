#!/bin/sh
# $FreeBSD: ea51dee8dbdaaf0590bb6332e1d4af978e454b33 $

set -e

MD=99
(
for s in 1m 4m 60m 120m 240m 1g
do
	(
	mdconfig -d -u $MD || true
	mdconfig -a -t malloc -s $s -u $MD
	disklabel -w md$MD auto
	./newfs -R /dev/md${MD}c
	) 1>&2
	md5 < /dev/md${MD}c
done
mdconfig -d -u $MD 1>&2 || true
) 
