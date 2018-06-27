	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	__Z4funxv               ## -- Begin function _Z4funxv
	.p2align	4, 0x90
__Z4funxv:                              ## @_Z4funxv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	-8(%rbp), %rdi
	leaq	-12(%rbp), %rsi
	movl	$1, -8(%rbp)
	movl	$2, -12(%rbp)
	callq	__Z3maxIiERKT_S2_S2_
	movl	(%rax), %ecx
	movl	%ecx, -4(%rbp)
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__Z3maxIiERKT_S2_S2_    ## -- Begin function _Z3maxIiERKT_S2_S2_
	.weak_definition	__Z3maxIiERKT_S2_S2_
	.p2align	4, 0x90
__Z3maxIiERKT_S2_S2_:                   ## @_Z3maxIiERKT_S2_S2_
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi3:
	.cfi_def_cfa_offset 16
Lcfi4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi5:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movl	(%rsi), %eax
	movq	-16(%rbp), %rsi
	cmpl	(%rsi), %eax
	jge	LBB1_2
## BB#1:
	movq	-16(%rbp), %rax
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	jmp	LBB1_3
LBB1_2:
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)         ## 8-byte Spill
LBB1_3:
	movq	-24(%rbp), %rax         ## 8-byte Reload
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
