# $FreeBSD: 9962ddc60a05097a3f2c984cdc75caca02165854 $

# Read global symbols from object file.
BEGIN {
        while ("${NM:='nm'} " ARGV[1] | getline) {
                if (match($0, /^[^[:space:]]+ [^AU] (.*)$/)) {
                        syms[$3] = $2
                }
        }
        delete ARGV[1]
}

# Strip commons, make everything else local.
END {
        for (member in syms) {
                printf("--redefine-sym=%s=%s%s\n", member, prefix, member);
        }
}
