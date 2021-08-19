#!/bin/sh
################################################################################
#
# lockgraphs.sh by Michele Dallachiesa -- 2008-05-07 -- v0.1
#
# $FreeBSD: 92a7dd2a1f817c877e43feb42c927cabf4f38549 $
#
################################################################################

sysctl debug.witness.graphs | awk '
BEGIN {
  print "digraph lockgraphs {"
  }

NR > 1 && $0 ~ /"Giant"/ {
  gsub(","," -> ");
  print $0 ";"
}

END { 
  print "}"
  }'

#eof
