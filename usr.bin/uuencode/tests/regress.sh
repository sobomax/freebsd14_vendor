# $FreeBSD: 6be0ef3cc9b06e5bf4fd854964e8e96b1221ebdb $

echo 1..2

REGRESSION_START($1)

REGRESSION_TEST(`traditional', `uuencode regress.in <${SRCDIR}/regress.in')
REGRESSION_TEST(`base64', `uuencode -m regress.in <${SRCDIR}/regress.in')

REGRESSION_END()
