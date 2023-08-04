	.file	"client_tcp.c"
	.section	.rodata
.LC0:
	.string	"127.0.0.1"
.LC1:
	.string	"Data received: %s"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$1080, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	$0, %edx
	movl	$1, %esi
	movl	$2, %edi
	call	socket
	movl	%eax, -1080(%rbp)
	movw	$2, -1072(%rbp)
	movl	$7891, %edi
	call	htons
	movw	%ax, -1070(%rbp)
	movl	$.LC0, %edi
	movl	$0, %eax
	call	inet_addr
	movl	%eax, -1068(%rbp)
	leaq	-1072(%rbp), %rax
	addq	$8, %rax
	movl	$8, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset
	movl	$16, -1076(%rbp)
	movl	-1076(%rbp), %edx
	leaq	-1072(%rbp), %rcx
	movl	-1080(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	connect
	leaq	-1056(%rbp), %rsi
	movl	-1080(%rbp), %eax
	movl	$0, %ecx
	movl	$1024, %edx
	movl	%eax, %edi
	call	recv
	leaq	-1056(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	movq	-24(%rbp), %rbx
	xorq	%fs:40, %rbx
	je	.L3
	call	__stack_chk_fail
.L3:
	addq	$1080, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
