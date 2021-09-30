/*-
 * Test 0002:	BPF_RET+BPF_K
 *
 * $FreeBSD: 15935505d849c91665c32538db38c2687a77f23a $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_RET+BPF_K, 0xdeadc0de),
};

/* Packet */
static u_char	pkt[] = {
	0x00,
};

/* Packet length seen on wire */
static u_int	wirelen =	sizeof(pkt);

/* Packet length passed on buffer */
static u_int	buflen =	sizeof(pkt);

/* Invalid instruction */
static int	invalid =	0;

/* Expected return value */
static u_int	expect =	0xdeadc0de;

/* Expected signal */
static int	expect_signal =	0;
