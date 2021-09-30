#!/bin/sh
# $FreeBSD: fd0f41c6c5e60cd882473d721327f0187dab7dcc $

name="$(mktemp -u stripe.XXXXXX)"
class="stripe"
base=`basename $0`

gstripe_test_cleanup()
{
	[ -c /dev/$class/$name ] && gstripe destroy $name
	geom_test_cleanup
}
trap gstripe_test_cleanup ABRT EXIT INT TERM

. `dirname $0`/../geom_subr.sh
