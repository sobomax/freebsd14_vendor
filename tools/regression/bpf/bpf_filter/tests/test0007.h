/*-
 * Test 0007:	BPF_LD+BPF_W+BPF_LEN
 *
 * $FreeBSD: 026c6f7d97254a982ad61d9ec637c7dd6f302da7 $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_LD+BPF_W+BPF_LEN, 0),
	BPF_STMT(BPF_RET+BPF_A, 0),
};

/* Packet */
static u_char	pkt[] = {
	0x00,
};

/* Packet length seen on wire */
static u_int	wirelen =	0xdeadc0de;

/* Packet length passed on buffer */
static u_int	buflen =	0xdeadc0de;

/* Invalid instruction */
static int	invalid =	0;

/* Expected return value */
static u_int	expect =	0xdeadc0de;

/* Expected signal */
static int	expect_signal =	0;
