	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_reverse
	.align	4, 0x90
_reverse:                               ## @reverse
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
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -24(%rbp)
	movq	-8(%rbp), %rdi
	movq	%rdi, -32(%rbp)
	movl	$0, -12(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	-24(%rbp), %rax
	movsbl	(%rax), %ecx
	cmpl	$0, %ecx
	je	LBB0_4
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_3
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-24(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -24(%rbp)
	movl	-12(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -12(%rbp)
	jmp	LBB0_1
LBB0_4:
	movq	-24(%rbp), %rax
	addq	$-1, %rax
	movq	%rax, -24(%rbp)
	movl	$0, -36(%rbp)
LBB0_5:                                 ## =>This Inner Loop Header: Depth=1
	movl	$2, %eax
	movl	-36(%rbp), %ecx
	movl	-12(%rbp), %edx
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	movl	%edx, %eax
	cltd
	movl	-44(%rbp), %esi         ## 4-byte Reload
	idivl	%esi
	cmpl	%eax, %ecx
	jge	LBB0_8
## BB#6:                                ##   in Loop: Header=BB0_5 Depth=1
	movq	-24(%rbp), %rax
	movb	(%rax), %cl
	movb	%cl, -37(%rbp)
	movq	-32(%rbp), %rax
	movb	(%rax), %cl
	movq	-24(%rbp), %rax
	movb	%cl, (%rax)
	movb	-37(%rbp), %cl
	movq	-32(%rbp), %rax
	movb	%cl, (%rax)
## BB#7:                                ##   in Loop: Header=BB0_5 Depth=1
	movl	-36(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -36(%rbp)
	jmp	LBB0_5
LBB0_8:
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_dectobin
	.align	4, 0x90
_dectobin:                              ## @dectobin
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp5:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	-10(%rbp), %rax
	movl	%edi, -4(%rbp)
	movl	L_dectobin.tst(%rip), %edi
	movl	%edi, -10(%rbp)
	movw	L_dectobin.tst+4(%rip), %cx
	movw	%cx, -6(%rbp)
	movq	%rax, %rdi
	callq	_reverse
	leaq	L_.str(%rip), %rdi
	leaq	-10(%rbp), %rsi
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rsi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movq	%rsi, %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_dectobin.tst:                         ## @dectobin.tst
	.asciz	"hello"

L_.str:                                 ## @.str
	.asciz	"hello in rev: %s\n"

L_.str1:                                ## @.str1
	.asciz	"hello"


.subsections_via_symbols
