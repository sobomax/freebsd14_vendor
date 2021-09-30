#!/bin/sh
# $FreeBSD: 3185d826c7ddec1725632e86f39e47779c271e34 $

i=1
"$(dirname $0)/kqtest" | while read line; do
	echo $line | grep -q passed
	if [ $? -eq 0 ]; then
		echo "ok - $i $line"
		: $(( i += 1 ))
	fi

	echo $line | grep -q 'tests completed'
	if [ $? -eq 0 ]; then
		echo -n "1.."
		echo $line | cut -d' ' -f3
	fi
done
