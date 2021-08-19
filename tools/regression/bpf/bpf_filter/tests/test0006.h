/*-
 * Test 0006:	BPF_LD+BPF_B+BPF_ABS
 *
 * $FreeBSD: 2c7485db6ad7bf9792eb0ed5b44b8cb9e19d55cc $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_LD+BPF_B+BPF_ABS, 1),
	BPF_STMT(BPF_RET+BPF_A, 0),
};

/* Packet */
static u_char	pkt[] = {
	0x01, 0x23,
};

/* Packet length seen on wire */
static u_int	wirelen =	sizeof(pkt);

/* Packet length passed on buffer */
static u_int	buflen =	sizeof(pkt);

/* Invalid instruction */
static int	invalid =	0;

/* Expected return value */
static u_int	expect =	0x23;

/* Expected signal */
static int	expect_signal =	0;
