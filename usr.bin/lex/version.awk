# $FreeBSD: 3d34093bef6d006afbfbc739785233c466e38ac8 $

BEGIN {
	FS = "[ \t\.\"]+"
}

{
	if ($1 ~ /^#define$/ && $2 ~ /^VERSION$/) {
		printf("-DFLEX_MAJOR_VERSION=%s\n", $3);
		printf("-DFLEX_MINOR_VERSION=%s\n", $4);
		printf("-DFLEX_SUBMINOR_VERSION=%s\n", $5);
	}
}
