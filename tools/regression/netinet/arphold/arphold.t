#!/bin/sh
#
# $FreeBSD: eb1b2a8c5ad3e266e96b2fa2f9f1a06f02bb5e2a $

make arphold 2>&1 > /dev/null

./arphold 192.168.1.222
