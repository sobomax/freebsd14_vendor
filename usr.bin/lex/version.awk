# $FreeBSD: 434c1388682ca103c75cfff78e69eb79ee507a2f $

BEGIN {
	FS = "[ \t\.\"]+"
}

{
	if ($1 ~ /^#define$/ && $2 ~ /^VERSION$/) {
		printf("%s.%s.%s\n", $3, $4, $5);
	}
}
