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
	subq	$2048, %rsp             ## imm = 0x800
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -2020(%rbp)
	movl	%edi, -2024(%rbp)
	movq	%rsi, -2032(%rbp)
	movl	$0, -2040(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	$1000, %esi             ## imm = 0x3E8
	leaq	-1008(%rbp), %rdi
	callq	_getlino
	movl	%eax, -2036(%rbp)
	cmpl	$0, %eax
	jle	LBB0_5
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	movl	-2036(%rbp), %eax
	cmpl	-2040(%rbp), %eax
	jle	LBB0_4
## BB#3:                                ##   in Loop: Header=BB0_1 Depth=1
	leaq	-1008(%rbp), %rsi
	leaq	-2016(%rbp), %rdi
	movl	-2036(%rbp), %eax
	movl	%eax, -2040(%rbp)
	callq	_copy
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_1
LBB0_5:
	cmpl	$0, -2040(%rbp)
	jle	LBB0_7
## BB#6:
	leaq	L_.str(%rip), %rdi
	leaq	-2016(%rbp), %rsi
	movb	$0, %al
	callq	_printf
	movl	%eax, -2044(%rbp)       ## 4-byte Spill
LBB0_7:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	cmpq	-8(%rbp), %rax
	jne	LBB0_9
## BB#8:                                ## %SP_return
	xorl	%eax, %eax
	addq	$2048, %rsp             ## imm = 0x800
	popq	%rbp
	retq
LBB0_9:                                 ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.globl	_getlino
	.align	4, 0x90
_getlino:                               ## @getlino
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
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	$0, -20(%rbp)
LBB1_1:                                 ## =>This Inner Loop Header: Depth=1
	xorl	%eax, %eax
	movb	%al, %cl
	movl	-20(%rbp), %eax
	movl	-12(%rbp), %edx
	subl	$1, %edx
	cmpl	%edx, %eax
	movb	%cl, -21(%rbp)          ## 1-byte Spill
	jge	LBB1_4
## BB#2:                                ##   in Loop: Header=BB1_1 Depth=1
	callq	_getchar
	xorl	%ecx, %ecx
	movb	%cl, %dl
	movl	%eax, -16(%rbp)
	cmpl	$-1, %eax
	movb	%dl, -21(%rbp)          ## 1-byte Spill
	je	LBB1_4
## BB#3:                                ##   in Loop: Header=BB1_1 Depth=1
	cmpl	$10, -16(%rbp)
	setne	%al
	movb	%al, -21(%rbp)          ## 1-byte Spill
LBB1_4:                                 ##   in Loop: Header=BB1_1 Depth=1
	movb	-21(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB1_5
	jmp	LBB1_7
LBB1_5:                                 ##   in Loop: Header=BB1_1 Depth=1
	movl	-16(%rbp), %eax
	movb	%al, %cl
	movslq	-20(%rbp), %rdx
	movq	-8(%rbp), %rsi
	movb	%cl, (%rsi,%rdx)
## BB#6:                                ##   in Loop: Header=BB1_1 Depth=1
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
	jmp	LBB1_1
LBB1_7:
	cmpl	$10, -16(%rbp)
	jne	LBB1_9
## BB#8:
	movl	-16(%rbp), %eax
	movb	%al, %cl
	movslq	-20(%rbp), %rdx
	movq	-8(%rbp), %rsi
	movb	%cl, (%rsi,%rdx)
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
LBB1_9:
	movslq	-20(%rbp), %rax
	movq	-8(%rbp), %rcx
	movb	$0, (%rcx,%rax)
	movl	-20(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_copy
	.align	4, 0x90
_copy:                                  ## @copy
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp6:
	.cfi_def_cfa_offset 16
Ltmp7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp8:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$0, -20(%rbp)
LBB2_1:                                 ## =>This Inner Loop Header: Depth=1
	movslq	-20(%rbp), %rax
	movq	-16(%rbp), %rcx
	movb	(%rcx,%rax), %dl
	movslq	-20(%rbp), %rax
	movq	-8(%rbp), %rcx
	movb	%dl, (%rcx,%rax)
	movsbl	%dl, %esi
	cmpl	$0, %esi
	je	LBB2_3
## BB#2:                                ##   in Loop: Header=BB2_1 Depth=1
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
	jmp	LBB2_1
LBB2_3:
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%s"


.subsections_via_symbols
