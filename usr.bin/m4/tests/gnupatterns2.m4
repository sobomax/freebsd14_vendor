dnl $FreeBSD: 23170b7f35464696f1cc11b4a78fdd171f246df6 $
define(`zoinx',dnl
`patsubst($1,\(\w+\)\(\W*\),\1 )')dnl
zoinx(acosl asinl atanl \
       cosl sinl tanl \
       coshl sinhl tanhl)
