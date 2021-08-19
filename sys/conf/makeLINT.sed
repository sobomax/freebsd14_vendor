#!/usr/bin/sed -E -n -f
# $FreeBSD: 6b3dab640af34c9cb47b36ffa743fd4beff66ade $

/^(machine|files|ident|(no)?device|(no)?makeoption(s)?|(no)?option(s)?|profile|cpu|maxusers)[[:space:]]/ {
    s/[[:space:]]*#.*$//
    p
}
