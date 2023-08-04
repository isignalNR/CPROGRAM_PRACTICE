	.file	"add.c"
	.globl	x
	.data
	.align 4
	.type	x, @object
	.size	x, 4
x:
	.long	10
	.globl	y
	.align 4
	.type	y, @object
	.size	y, 4
y:
	.long	30
	.section	.rodata
.LC0:
	.string	"%p %p %p %d\n"
.LC1:
	.string	"%d\n"
	.text
	.globl	add
	.type	add, @function
add:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %esi
	leaq	-4(%rbp), %rcx
	leaq	-24(%rbp), %rdx
	leaq	-20(%rbp), %rax
	movl	%esi, %r8d
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	add, .-add
	.section	.rodata
.LC2:
	.string	"%p %p %d %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	y(%rip), %edx
	movl	x(%rip), %eax
	movl	%edx, %r8d
	movl	%eax, %ecx
	movl	$y, %edx
	movl	$x, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	y(%rip), %edx
	movl	x(%rip), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	add
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
