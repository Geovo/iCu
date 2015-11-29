	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rcx
	movq	%rcx, -8(%rbp)
	movl	$0, -36(%rbp)
	movl	%edi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	l_main.me(%rip), %rcx
	movq	%rcx, -32(%rbp)
	movq	l_main.me+8(%rip), %rcx
	movq	%rcx, -24(%rbp)
	movq	l_main.me+16(%rip), %rcx
	movq	%rcx, -16(%rbp)
	movq	(%rax), %rax
	cmpq	-8(%rbp), %rax
	jne	LBB0_2
## BB#1:                                ## %SP_return
	xorl	%eax, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
LBB0_2:                                 ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.section	__TEXT,__const
	.align	2                       ## @main.me
l_main.me:
	.long	20                      ## 0x14
	.asciz	"Kristian\000\000\000\000\000\000\000\000\000\000\000"


.subsections_via_symbols
