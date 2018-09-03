	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI0_0:
	.quad	4621256167635550208     ## double 9
LCPI0_1:
	.quad	4617315517961601024     ## double 5
LCPI0_2:
	.quad	4629700416936869888     ## double 32
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
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
	subq	$48, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$0, -36(%rbp)
	movl	$32, -40(%rbp)
	movl	$1, -44(%rbp)
	cvtsi2sdl	-36(%rbp), %xmm0
	movsd	%xmm0, -24(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movsd	-24(%rbp), %xmm0        ## xmm0 = mem[0],zero
	cvtsi2sdl	-40(%rbp), %xmm1
	ucomisd	%xmm0, %xmm1
	jb	LBB0_3
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str(%rip), %rdi
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movsd	LCPI0_1(%rip), %xmm1    ## xmm1 = mem[0],zero
	movsd	LCPI0_2(%rip), %xmm2    ## xmm2 = mem[0],zero
	movsd	-24(%rbp), %xmm3        ## xmm3 = mem[0],zero
	subsd	%xmm2, %xmm3
	mulsd	%xmm3, %xmm1
	divsd	%xmm0, %xmm1
	movsd	%xmm1, -32(%rbp)
	movsd	-24(%rbp), %xmm0        ## xmm0 = mem[0],zero
	movsd	-32(%rbp), %xmm1        ## xmm1 = mem[0],zero
	movb	$2, %al
	callq	_printf
	movsd	-24(%rbp), %xmm0        ## xmm0 = mem[0],zero
	cvtsi2sdl	-44(%rbp), %xmm1
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -24(%rbp)
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	jmp	LBB0_1
LBB0_3:
	xorl	%eax, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%2.2f\302\260F= %2.2f\302\260C\n"


.subsections_via_symbols
