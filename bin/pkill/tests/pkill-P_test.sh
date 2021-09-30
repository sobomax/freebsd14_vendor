#!/bin/sh
# $FreeBSD: 2030710af659e6f990c489360b097fbabd9a873d $

base=`basename $0`

echo "1..1"

name="pkill -P <ppid>"
ppid=$$
sleep=$(pwd)/sleep.txt
ln -sf /bin/sleep $sleep
$sleep 5 &
sleep 0.3
pkill -f -P $ppid $sleep
ec=$?
case $ec in
0)
	echo "ok - $name"
	;;
*)
	echo "not ok - $name"
	;;
esac

rm -f $sleep
