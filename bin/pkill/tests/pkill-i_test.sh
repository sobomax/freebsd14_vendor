#!/bin/sh
# $FreeBSD: b9b8df8be45907b075083d33d453e5a36d3fd3e2 $

base=`basename $0`

echo "1..1"

name="pkill -i"
sleep=$(pwd)/sleep.txt
usleep="${sleep}XXX"
touch $usleep
lsleep="${sleep}xxx"
ln -sf /bin/sleep $usleep
$usleep 5 &
sleep 0.3
pkill -f -i $lsleep
ec=$?
case $ec in
0)
	echo "ok - $name"
	;;
*)
	echo "not ok - $name"
	;;
esac
rm -f $sleep $usleep
