#!/bin/sh
# $FreeBSD: 4d8feaa34eb2f366cd551c14ecc4102ddb66dd73 $

base=`basename $0`

echo "1..1"

name="pgrep -F <pidfile>"
pidfile=$(pwd)/pidfile.txt
sleep=$(pwd)/sleep.txt
ln -sf /bin/sleep $sleep
$sleep 5 &
sleep 0.3
chpid=$!
echo $chpid > $pidfile
pid=`pgrep -f -F $pidfile $sleep`
if [ "$pid" = "$chpid" ]; then
	echo "ok - $name"
else
	echo "not ok - $name"
fi
kill "$chpid"
rm -f $pidfile
rm -f $sleep
