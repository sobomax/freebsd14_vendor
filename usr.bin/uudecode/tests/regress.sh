# $FreeBSD: 3aeb04d2c02eb5fadaf7ec5135394bab4d9bdead $

echo 1..2

REGRESSION_START($1)

REGRESSION_TEST_ONE(`uudecode -p <${SRCDIR}/regress.traditional.in', `traditional')
REGRESSION_TEST_ONE(`uudecode -p <${SRCDIR}/regress.base64.in', `base64')

REGRESSION_END()
