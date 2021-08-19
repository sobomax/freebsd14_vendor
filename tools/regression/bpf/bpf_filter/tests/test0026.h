/*-
 * Test 0026:	BPF_ALU+BPF_MUL+BPF_X
 *
 * $FreeBSD: f881c0f8eb46d6481368cae36e2745b0bd27ed2d $
 */

/* BPF program */
static struct bpf_insn	pc[] = {
	BPF_STMT(BPF_LD+BPF_IMM, 0xdead),
	BPF_STMT(BPF_LDX+BPF_IMM, 0xc0de),
	BPF_STMT(BPF_ALU+BPF_MUL+BPF_X, 0),
	BPF_STMT(BPF_RET+BPF_A, 0),
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
static u_int	expect =	0xa7c2da06;

/* Expected signal */
static int	expect_signal =	0;
