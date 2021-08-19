#!/bin/sh
# $FreeBSD: 8bdfd03be81b623789d533018b165427e9b86083 $

cd `dirname $0`

executable=`basename $0 .t`

make $executable 2>&1 > /dev/null

exec ./$executable
