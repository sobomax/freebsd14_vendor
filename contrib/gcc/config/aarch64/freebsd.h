/* $FreeBSD: 7ce148742e7f0c1ac5c016e0a6e2a27d1f048d05 $ */

#undef INIT_SECTION_ASM_OP
#undef FINI_SECTION_ASM_OP
#define INIT_ARRAY_SECTION_ASM_OP "\t.section\t.init_array,\"aw\",%init_array"
#define FINI_ARRAY_SECTION_ASM_OP "\t.section\t.fini_array,\"aw\",%fini_array"
