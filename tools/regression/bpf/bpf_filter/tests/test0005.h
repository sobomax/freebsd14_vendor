/*-
 * Test 0005:	BPF_LD+BPF_H+BPF_ABS
 *
 * $FreeBSD: 4dae935d1357c93b151d95409a87fbe7c0471651 $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_LD+BPF_H+BPF_ABS, 1),
	BPF_STMT(BPF_RET+BPF_A, 0),
};

/* Packet */
static u_char	pkt[] = {
	0x01, 0x23, 0x45,
};

/* Packet length seen on wire */
static u_int	wirelen =	sizeof(pkt);

/* Packet length passed on buffer */
static u_int	buflen =	sizeof(pkt);

/* Invalid instruction */
static int	invalid =	0;

/* Expected return value */
static u_int	expect =	0x2345;

/* Expected signal */
static int	expect_signal =	0;
