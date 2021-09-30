#!/bin/sh
# $FreeBSD: 35feb209a0e563c6843addec6cb0d239d8d27308 $

cd `dirname $0`

m4 regress.m4 regress.sh | sh
