	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_minprintf
	.align	4, 0x90
_minprintf:                             ## @minprintf
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
	subq	$576, %rsp              ## imm = 0x240
	testb	%al, %al
	movaps	%xmm7, -272(%rbp)       ## 16-byte Spill
	movaps	%xmm6, -288(%rbp)       ## 16-byte Spill
	movaps	%xmm5, -304(%rbp)       ## 16-byte Spill
	movaps	%xmm4, -320(%rbp)       ## 16-byte Spill
	movaps	%xmm3, -336(%rbp)       ## 16-byte Spill
	movaps	%xmm2, -352(%rbp)       ## 16-byte Spill
	movaps	%xmm1, -368(%rbp)       ## 16-byte Spill
	movaps	%xmm0, -384(%rbp)       ## 16-byte Spill
	movq	%rdi, -392(%rbp)        ## 8-byte Spill
	movq	%r9, -400(%rbp)         ## 8-byte Spill
	movq	%r8, -408(%rbp)         ## 8-byte Spill
	movq	%rcx, -416(%rbp)        ## 8-byte Spill
	movq	%rdx, -424(%rbp)        ## 8-byte Spill
	movq	%rsi, -432(%rbp)        ## 8-byte Spill
	je	LBB0_29
## BB#28:
	movaps	-384(%rbp), %xmm0       ## 16-byte Reload
	movaps	%xmm0, -208(%rbp)
	movaps	-368(%rbp), %xmm1       ## 16-byte Reload
	movaps	%xmm1, -192(%rbp)
	movaps	-352(%rbp), %xmm2       ## 16-byte Reload
	movaps	%xmm2, -176(%rbp)
	movaps	-336(%rbp), %xmm3       ## 16-byte Reload
	movaps	%xmm3, -160(%rbp)
	movaps	-320(%rbp), %xmm4       ## 16-byte Reload
	movaps	%xmm4, -144(%rbp)
	movaps	-304(%rbp), %xmm5       ## 16-byte Reload
	movaps	%xmm5, -128(%rbp)
	movaps	-288(%rbp), %xmm6       ## 16-byte Reload
	movaps	%xmm6, -112(%rbp)
	movaps	-272(%rbp), %xmm7       ## 16-byte Reload
	movaps	%xmm7, -96(%rbp)
LBB0_29:
	movq	-400(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -216(%rbp)
	movq	-408(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -224(%rbp)
	movq	-416(%rbp), %rdx        ## 8-byte Reload
	movq	%rdx, -232(%rbp)
	movq	-424(%rbp), %rsi        ## 8-byte Reload
	movq	%rsi, -240(%rbp)
	movq	-432(%rbp), %rdi        ## 8-byte Reload
	movq	%rdi, -248(%rbp)
	movq	-392(%rbp), %r8         ## 8-byte Reload
	leaq	-32(%rbp), %r9
	movq	___stack_chk_guard@GOTPCREL(%rip), %r10
	movq	(%r10), %r10
	movq	%r10, -8(%rbp)
	movq	%r8, -40(%rbp)
	leaq	-256(%rbp), %r8
	movq	%r8, 16(%r9)
	leaq	16(%rbp), %r8
	movq	%r8, 8(%r9)
	movl	$48, 4(%r9)
	movl	$8, (%r9)
	movq	-40(%rbp), %r8
	movq	%r8, -48(%rbp)
LBB0_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_17 Depth 2
	movq	-48(%rbp), %rax
	cmpb	$0, (%rax)
	je	LBB0_23
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	movq	-48(%rbp), %rax
	movsbl	(%rax), %ecx
	cmpl	$37, %ecx
	je	LBB0_4
## BB#3:                                ##   in Loop: Header=BB0_1 Depth=1
	movq	-48(%rbp), %rax
	movsbl	(%rax), %edi
	callq	_putchar
	movl	%eax, -436(%rbp)        ## 4-byte Spill
	jmp	LBB0_22
LBB0_4:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-48(%rbp), %rax
	movq	%rax, %rcx
	incq	%rcx
	movq	%rcx, -48(%rbp)
	movsbl	1(%rax), %edx
	movl	%edx, %esi
	subl	$115, %esi
	movl	%edx, -440(%rbp)        ## 4-byte Spill
	movl	%esi, -444(%rbp)        ## 4-byte Spill
	je	LBB0_13
	jmp	LBB0_26
LBB0_26:                                ##   in Loop: Header=BB0_1 Depth=1
	movl	-440(%rbp), %eax        ## 4-byte Reload
	subl	$102, %eax
	movl	%eax, -448(%rbp)        ## 4-byte Spill
	je	LBB0_9
	jmp	LBB0_27
LBB0_27:                                ##   in Loop: Header=BB0_1 Depth=1
	movl	-440(%rbp), %eax        ## 4-byte Reload
	subl	$100, %eax
	movl	%eax, -452(%rbp)        ## 4-byte Spill
	jne	LBB0_21
	jmp	LBB0_5
LBB0_5:                                 ##   in Loop: Header=BB0_1 Depth=1
	leaq	-32(%rbp), %rax
	movl	-32(%rbp), %ecx
	cmpl	$40, %ecx
	movq	%rax, -464(%rbp)        ## 8-byte Spill
	movl	%ecx, -468(%rbp)        ## 4-byte Spill
	ja	LBB0_7
## BB#6:                                ##   in Loop: Header=BB0_1 Depth=1
	movl	-468(%rbp), %eax        ## 4-byte Reload
	movslq	%eax, %rcx
	movq	-464(%rbp), %rdx        ## 8-byte Reload
	addq	16(%rdx), %rcx
	addl	$8, %eax
	movl	%eax, (%rdx)
	movq	%rcx, -480(%rbp)        ## 8-byte Spill
	jmp	LBB0_8
LBB0_7:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-464(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rcx
	movq	%rcx, %rdx
	addq	$8, %rcx
	movq	%rcx, 8(%rax)
	movq	%rdx, -480(%rbp)        ## 8-byte Spill
LBB0_8:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-480(%rbp), %rax        ## 8-byte Reload
	leaq	L_.str(%rip), %rdi
	movl	(%rax), %ecx
	movl	%ecx, -60(%rbp)
	movl	-60(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -484(%rbp)        ## 4-byte Spill
	jmp	LBB0_21
LBB0_9:                                 ##   in Loop: Header=BB0_1 Depth=1
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	addq	$4, %rcx
	movl	-28(%rbp), %edx
	cmpl	$160, %edx
	movq	%rax, -496(%rbp)        ## 8-byte Spill
	movq	%rcx, -504(%rbp)        ## 8-byte Spill
	movl	%edx, -508(%rbp)        ## 4-byte Spill
	ja	LBB0_11
## BB#10:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	-508(%rbp), %eax        ## 4-byte Reload
	movslq	%eax, %rcx
	movq	-496(%rbp), %rdx        ## 8-byte Reload
	addq	16(%rdx), %rcx
	addl	$16, %eax
	movq	-504(%rbp), %rsi        ## 8-byte Reload
	movl	%eax, (%rsi)
	movq	%rcx, -520(%rbp)        ## 8-byte Spill
	jmp	LBB0_12
LBB0_11:                                ##   in Loop: Header=BB0_1 Depth=1
	movq	-496(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rcx
	movq	%rcx, %rdx
	addq	$8, %rcx
	movq	%rcx, 8(%rax)
	movq	%rdx, -520(%rbp)        ## 8-byte Spill
LBB0_12:                                ##   in Loop: Header=BB0_1 Depth=1
	movq	-520(%rbp), %rax        ## 8-byte Reload
	leaq	L_.str1(%rip), %rdi
	movsd	(%rax), %xmm0           ## xmm0 = mem[0],zero
	movsd	%xmm0, -72(%rbp)
	movsd	-72(%rbp), %xmm0        ## xmm0 = mem[0],zero
	movb	$1, %al
	callq	_printf
	movl	%eax, -524(%rbp)        ## 4-byte Spill
	jmp	LBB0_21
LBB0_13:                                ##   in Loop: Header=BB0_1 Depth=1
	leaq	-32(%rbp), %rax
	movl	-32(%rbp), %ecx
	cmpl	$40, %ecx
	movq	%rax, -536(%rbp)        ## 8-byte Spill
	movl	%ecx, -540(%rbp)        ## 4-byte Spill
	ja	LBB0_15
## BB#14:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	-540(%rbp), %eax        ## 4-byte Reload
	movslq	%eax, %rcx
	movq	-536(%rbp), %rdx        ## 8-byte Reload
	addq	16(%rdx), %rcx
	addl	$8, %eax
	movl	%eax, (%rdx)
	movq	%rcx, -552(%rbp)        ## 8-byte Spill
	jmp	LBB0_16
LBB0_15:                                ##   in Loop: Header=BB0_1 Depth=1
	movq	-536(%rbp), %rax        ## 8-byte Reload
	movq	8(%rax), %rcx
	movq	%rcx, %rdx
	addq	$8, %rcx
	movq	%rcx, 8(%rax)
	movq	%rdx, -552(%rbp)        ## 8-byte Spill
LBB0_16:                                ##   in Loop: Header=BB0_1 Depth=1
	movq	-552(%rbp), %rax        ## 8-byte Reload
	movq	(%rax), %rax
	movq	%rax, -56(%rbp)
LBB0_17:                                ##   Parent Loop BB0_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movq	-56(%rbp), %rax
	cmpb	$0, (%rax)
	je	LBB0_20
## BB#18:                               ##   in Loop: Header=BB0_17 Depth=2
	movq	-56(%rbp), %rax
	movsbl	(%rax), %edi
	callq	_putchar
	movl	%eax, -556(%rbp)        ## 4-byte Spill
## BB#19:                               ##   in Loop: Header=BB0_17 Depth=2
	movq	-56(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -56(%rbp)
	jmp	LBB0_17
LBB0_20:                                ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_21
LBB0_21:                                ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_22
LBB0_22:                                ##   in Loop: Header=BB0_1 Depth=1
	movq	-48(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -48(%rbp)
	jmp	LBB0_1
LBB0_23:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	leaq	-32(%rbp), %rcx
	movq	(%rax), %rax
	cmpq	-8(%rbp), %rax
	movq	%rcx, -568(%rbp)        ## 8-byte Spill
	jne	LBB0_25
## BB#24:                               ## %SP_return
	addq	$576, %rsp              ## imm = 0x240
	popq	%rbp
	retq
LBB0_25:                                ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
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
	xorl	%eax, %eax
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d"

L_.str1:                                ## @.str1
	.asciz	"%f"


.subsections_via_symbols
