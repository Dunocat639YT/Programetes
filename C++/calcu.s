	.file	"calcu.cpp"
	.intel_syntax noprefix
	.text
	.section	.text$_ZNSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEC1IxvEERKT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEC1IxvEERKT_
	.def	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEC1IxvEERKT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEC1IxvEERKT_
_ZNSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEC1IxvEERKT_:
.LFB2591:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	QWORD PTR 24[rbp], rdx
	mov	rax, QWORD PTR 24[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR 16[rbp]
	mov	QWORD PTR [rax], rdx
	nop
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono15duration_valuesIxE4zeroEv,"x"
	.linkonce discard
	.globl	_ZNSt6chrono15duration_valuesIxE4zeroEv
	.def	_ZNSt6chrono15duration_valuesIxE4zeroEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono15duration_valuesIxE4zeroEv
_ZNSt6chrono15duration_valuesIxE4zeroEv:
.LFB2592:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	eax, 0
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv
	.def	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv
_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv:
.LFB2593:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	rax, QWORD PTR 16[rbp]
	mov	rax, QWORD PTR [rax]
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono8durationIxSt5ratioILx1ELx1EEEC1IxvEERKT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6chrono8durationIxSt5ratioILx1ELx1EEEC1IxvEERKT_
	.def	_ZNSt6chrono8durationIxSt5ratioILx1ELx1EEEC1IxvEERKT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono8durationIxSt5ratioILx1ELx1EEEC1IxvEERKT_
_ZNSt6chrono8durationIxSt5ratioILx1ELx1EEEC1IxvEERKT_:
.LFB2612:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	QWORD PTR 24[rbp], rdx
	mov	rax, QWORD PTR 24[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR 16[rbp]
	mov	QWORD PTR [rax], rdx
	nop
	pop	rbp
	ret
	.seh_endproc
	.text
	.globl	_Z8calcularcdd
	.def	_Z8calcularcdd;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z8calcularcdd
_Z8calcularcdd:
.LFB2624:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	eax, ecx
	movsd	QWORD PTR 24[rbp], xmm1
	movsd	QWORD PTR 32[rbp], xmm2
	mov	BYTE PTR 16[rbp], al
	movsx	eax, BYTE PTR 16[rbp]
	cmp	eax, 47
	je	.L8
	cmp	eax, 47
	jg	.L9
	cmp	eax, 45
	je	.L10
	cmp	eax, 45
	jg	.L9
	cmp	eax, 42
	je	.L11
	cmp	eax, 43
	jne	.L9
	movsd	xmm0, QWORD PTR 24[rbp]
	addsd	xmm0, QWORD PTR 32[rbp]
	jmp	.L12
.L10:
	movsd	xmm0, QWORD PTR 24[rbp]
	subsd	xmm0, QWORD PTR 32[rbp]
	jmp	.L12
.L8:
	movsd	xmm0, QWORD PTR 24[rbp]
	divsd	xmm0, QWORD PTR 32[rbp]
	jmp	.L12
.L11:
	movsd	xmm0, QWORD PTR 24[rbp]
	mulsd	xmm0, QWORD PTR 32[rbp]
	jmp	.L12
.L9:
	pxor	xmm0, xmm0
.L12:
	pop	rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii ".\0"
	.text
	.globl	_Z7puntetsi
	.def	_Z7puntetsi;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z7puntetsi
_Z7puntetsi:
.LFB2625:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 48
	.seh_stackalloc	48
	.seh_endprologue
	mov	DWORD PTR 16[rbp], ecx
	mov	DWORD PTR -4[rbp], 0
	jmp	.L14
.L15:
	lea	rdx, .LC1[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZNSo5flushEv
	lea	rax, -16[rbp]
	lea	rdx, 16[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IivEERKT_
	lea	rax, -16[rbp]
	mov	rcx, rax
	call	_ZNSt11this_thread9sleep_forIxSt5ratioILx1ELx1000EEEEvRKNSt6chrono8durationIT_T0_EE
	add	DWORD PTR -4[rbp], 1
.L14:
	cmp	DWORD PTR -4[rbp], 2
	jle	.L15
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	nop
	add	rsp, 48
	pop	rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC2:
	.ascii "****************** Calculadora premium 3000 ******************\0"
.LC3:
	.ascii "Escriu el primer n\303\272mero: \0"
	.align 8
.LC4:
	.ascii "Molt b\303\251. Ara el segon n\303\272mero: \0"
	.align 8
.LC5:
	.ascii "Que vols fer amb aquestos dos numerets? (+ - * /): \0"
.LC6:
	.ascii "Perfecte!\0"
.LC7:
	.ascii "Netejant buffer de dades\0"
	.align 8
.LC8:
	.ascii "Calculant variables abstractes\0"
	.align 8
.LC9:
	.ascii "Descarregant resultats qu\303\240ntics\0"
.LC10:
	.ascii "Ja est\303\240!\0"
	.align 8
.LC11:
	.ascii "El resultat d'aqusta complicad\303\255ssima operaci\303\263 \303\251s: \0"
	.align 8
.LC12:
	.ascii "Gr\303\240cies per usar el nostre servei!\0"
.LC13:
	.ascii "Vol tornar a repetir? (s/n): \0"
.LC14:
	.ascii "Doncs tornem :)\0"
.LC15:
	.ascii "Pos vale :(\0"
	.align 8
.LC16:
	.ascii "No s\303\251 que coi has dit per\303\262 m'ho prendr\303\251 com un no\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2626:
	push	rbp
	.seh_pushreg	rbp
	push	rbx
	.seh_pushreg	rbx
	sub	rsp, 72
	.seh_stackalloc	72
	lea	rbp, 64[rsp]
	.seh_setframe	rbp, 64
	.seh_endprologue
	call	__main
	mov	BYTE PTR -1[rbp], 1
	nop
	movzx	eax, BYTE PTR -1[rbp]
	cmp	eax, 1
	jne	.L25
	lea	rdx, .LC2[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	lea	rdx, .LC3[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	lea	rdx, -16[rbp]
	mov	rax, QWORD PTR .refptr._ZSt3cin[rip]
	mov	rcx, rax
	call	_ZNSirsERd
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	lea	rdx, .LC4[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	lea	rdx, -24[rbp]
	mov	rax, QWORD PTR .refptr._ZSt3cin[rip]
	mov	rcx, rax
	call	_ZNSirsERd
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	lea	rdx, .LC5[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	lea	rdx, -2[rbp]
	mov	rax, QWORD PTR .refptr._ZSt3cin[rip]
	mov	rcx, rax
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	lea	rdx, .LC6[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	lea	rdx, .LC7[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	ecx, 500
	call	_Z7puntetsi
	lea	rdx, .LC8[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	ecx, 500
	call	_Z7puntetsi
	lea	rdx, .LC9[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	ecx, 500
	call	_Z7puntetsi
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	lea	rdx, .LC10[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	rcx, rax
	lea	rax, .LC11[rip]
	mov	rdx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	rbx, rax
	movsd	xmm1, QWORD PTR -24[rbp]
	movsd	xmm0, QWORD PTR -16[rbp]
	movzx	eax, BYTE PTR -2[rbp]
	movsx	eax, al
	movapd	xmm2, xmm1
	movapd	xmm1, xmm0
	mov	ecx, eax
	call	_Z8calcularcdd
	movq	rax, xmm0
	movq	xmm1, rax
	mov	rcx, rbx
	call	_ZNSolsEd
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	lea	rdx, .LC12[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	lea	rdx, .LC13[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	lea	rdx, -25[rbp]
	mov	rax, QWORD PTR .refptr._ZSt3cin[rip]
	mov	rcx, rax
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	movzx	eax, BYTE PTR -25[rbp]
	cmp	al, 115
	je	.L18
	movzx	eax, BYTE PTR -25[rbp]
	cmp	al, 83
	jne	.L19
.L18:
	lea	rdx, .LC14[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	BYTE PTR -1[rbp], 1
	jmp	.L20
.L19:
	movzx	eax, BYTE PTR -25[rbp]
	cmp	al, 110
	je	.L21
	movzx	eax, BYTE PTR -25[rbp]
	cmp	al, 78
	jne	.L22
.L21:
	lea	rdx, .LC15[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	edx, 10
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	mov	ecx, 1000
	call	_Z7puntetsi
	mov	BYTE PTR -1[rbp], 0
	jmp	.L20
.L22:
	lea	rdx, .LC16[rip]
	mov	rax, QWORD PTR .refptr._ZSt4cout[rip]
	mov	rcx, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	ecx, 1000
	call	_Z7puntetsi
	mov	BYTE PTR -1[rbp], 0
.L20:
	mov	eax, 0
	jmp	.L23
.L25:
	mov	eax, 0
.L23:
	add	rsp, 72
	pop	rbx
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6chrono8durationIxSt5ratioILx1ELx1EEE5countEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1EEE5countEv
	.def	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1EEE5countEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1EEE5countEv
_ZNKSt6chrono8durationIxSt5ratioILx1ELx1EEE5countEv:
.LFB2908:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	rax, QWORD PTR 16[rbp]
	mov	rax, QWORD PTR [rax]
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IivEERKT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IivEERKT_
	.def	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IivEERKT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IivEERKT_
_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IivEERKT_:
.LFB2936:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	QWORD PTR 24[rbp], rdx
	mov	rax, QWORD PTR 24[rbp]
	mov	eax, DWORD PTR [rax]
	movsx	rdx, eax
	mov	rax, QWORD PTR 16[rbp]
	mov	QWORD PTR [rax], rdx
	nop
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11this_thread9sleep_forIxSt5ratioILx1ELx1000EEEEvRKNSt6chrono8durationIT_T0_EE,"x"
	.linkonce discard
	.globl	_ZNSt11this_thread9sleep_forIxSt5ratioILx1ELx1000EEEEvRKNSt6chrono8durationIT_T0_EE
	.def	_ZNSt11this_thread9sleep_forIxSt5ratioILx1ELx1000EEEEvRKNSt6chrono8durationIT_T0_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11this_thread9sleep_forIxSt5ratioILx1ELx1000EEEEvRKNSt6chrono8durationIT_T0_EE
_ZNSt11this_thread9sleep_forIxSt5ratioILx1ELx1000EEEEvRKNSt6chrono8durationIT_T0_EE:
.LFB2937:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 96
	.seh_stackalloc	96
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	call	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEE4zeroEv
	mov	QWORD PTR -32[rbp], rax
	lea	rdx, -32[rbp]
	mov	rax, QWORD PTR 16[rbp]
	mov	rcx, rax
	call	_ZNSt6chronoleIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE
	test	al, al
	jne	.L36
	mov	rax, QWORD PTR 16[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE
	mov	QWORD PTR -40[rbp], rax
	lea	rdx, -40[rbp]
	mov	rax, QWORD PTR 16[rbp]
	mov	rcx, rax
	call	_ZNSt6chronomiIxSt5ratioILx1ELx1000EExS1_ILx1ELx1EEEENSt11common_typeIJNS_8durationIT_T0_EENS5_IT1_T2_EEEE4typeERKS8_RKSB_
	mov	QWORD PTR -24[rbp], rax
	lea	rax, -24[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000000000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE
	mov	QWORD PTR -48[rbp], rax
	lea	rax, -40[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1EEE5countEv
	mov	QWORD PTR -64[rbp], rax
	lea	rax, -48[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000000000EEE5countEv
	mov	DWORD PTR -56[rbp], eax
	nop
.L35:
	lea	rax, -64[rbp]
	mov	QWORD PTR -8[rbp], rax
	lea	rax, -64[rbp]
	mov	QWORD PTR -16[rbp], rax
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rcx, rax
	call	nanosleep64
	nop
	cmp	eax, -1
	jne	.L33
	mov	rax, QWORD PTR __imp__errno[rip]
	call	rax
	mov	eax, DWORD PTR [rax]
	cmp	eax, 4
	jne	.L33
	mov	eax, 1
	jmp	.L34
.L33:
	mov	eax, 0
.L34:
	test	al, al
	jne	.L35
	jmp	.L29
.L36:
	nop
.L29:
	add	rsp, 96
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEE4zeroEv,"x"
	.linkonce discard
	.globl	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEE4zeroEv
	.def	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEE4zeroEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEE4zeroEv
_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEE4zeroEv:
.LFB3067:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 48
	.seh_stackalloc	48
	.seh_endprologue
	call	_ZNSt6chrono15duration_valuesIxE4zeroEv
	mov	QWORD PTR -8[rbp], rax
	lea	rdx, -8[rbp]
	lea	rax, -16[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxvEERKT_
	mov	rax, QWORD PTR -16[rbp]
	add	rsp, 48
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chronoleIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE,"x"
	.linkonce discard
	.globl	_ZNSt6chronoleIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE
	.def	_ZNSt6chronoleIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chronoleIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE
_ZNSt6chronoleIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE:
.LFB3068:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 32
	.seh_stackalloc	32
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	QWORD PTR 24[rbp], rdx
	mov	rdx, QWORD PTR 16[rbp]
	mov	rax, QWORD PTR 24[rbp]
	mov	rcx, rax
	call	_ZNSt6chronoltIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE
	xor	eax, 1
	add	rsp, 32
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE,"x"
	.linkonce discard
	.globl	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE
	.def	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE
_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE:
.LFB3069:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 32
	.seh_stackalloc	32
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	rax, QWORD PTR 16[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1EEEES2_ILx1ELx1000EExLb1ELb0EE6__castIxS5_EES4_RKNS1_IT_T0_EE
	add	rsp, 32
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chronomiIxSt5ratioILx1ELx1000EExS1_ILx1ELx1EEEENSt11common_typeIJNS_8durationIT_T0_EENS5_IT1_T2_EEEE4typeERKS8_RKSB_,"x"
	.linkonce discard
	.globl	_ZNSt6chronomiIxSt5ratioILx1ELx1000EExS1_ILx1ELx1EEEENSt11common_typeIJNS_8durationIT_T0_EENS5_IT1_T2_EEEE4typeERKS8_RKSB_
	.def	_ZNSt6chronomiIxSt5ratioILx1ELx1000EExS1_ILx1ELx1EEEENSt11common_typeIJNS_8durationIT_T0_EENS5_IT1_T2_EEEE4typeERKS8_RKSB_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chronomiIxSt5ratioILx1ELx1000EExS1_ILx1ELx1EEEENSt11common_typeIJNS_8durationIT_T0_EENS5_IT1_T2_EEEE4typeERKS8_RKSB_
_ZNSt6chronomiIxSt5ratioILx1ELx1000EExS1_ILx1ELx1EEEENSt11common_typeIJNS_8durationIT_T0_EENS5_IT1_T2_EEEE4typeERKS8_RKSB_:
.LFB3071:
	push	rbp
	.seh_pushreg	rbp
	push	rbx
	.seh_pushreg	rbx
	sub	rsp, 72
	.seh_stackalloc	72
	lea	rbp, 64[rsp]
	.seh_setframe	rbp, 64
	.seh_endprologue
	mov	QWORD PTR 32[rbp], rcx
	mov	QWORD PTR 40[rbp], rdx
	mov	rax, QWORD PTR 32[rbp]
	mov	rax, QWORD PTR [rax]
	mov	QWORD PTR -16[rbp], rax
	lea	rax, -16[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
	mov	rbx, rax
	mov	rdx, QWORD PTR 40[rbp]
	lea	rax, -8[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxS1_ILx1ELx1EEvEERKNS0_IT_T0_EE
	lea	rax, -8[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
	sub	rbx, rax
	mov	rdx, rbx
	mov	QWORD PTR -24[rbp], rdx
	lea	rdx, -24[rbp]
	lea	rax, -32[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxvEERKT_
	mov	rax, QWORD PTR -32[rbp]
	add	rsp, 72
	pop	rbx
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000000000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE,"x"
	.linkonce discard
	.globl	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000000000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE
	.def	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000000000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000000000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE
_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000000000EEEExS2_ILx1ELx1000EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE:
.LFB3073:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 32
	.seh_stackalloc	32
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	rax, QWORD PTR 16[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000000000EEEES2_ILx1000000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1000EEEES4_RKNS1_IT_T0_EE
	add	rsp, 32
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxvEERKT_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxvEERKT_
	.def	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxvEERKT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxvEERKT_
_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxvEERKT_:
.LFB3149:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	QWORD PTR 24[rbp], rdx
	mov	rax, QWORD PTR 24[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR 16[rbp]
	mov	QWORD PTR [rax], rdx
	nop
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chronoltIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE,"x"
	.linkonce discard
	.globl	_ZNSt6chronoltIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE
	.def	_ZNSt6chronoltIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chronoltIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE
_ZNSt6chronoltIxSt5ratioILx1ELx1000EExS2_EEbRKNS_8durationIT_T0_EERKNS3_IT1_T2_EE:
.LFB3150:
	push	rbp
	.seh_pushreg	rbp
	push	rbx
	.seh_pushreg	rbx
	sub	rsp, 56
	.seh_stackalloc	56
	lea	rbp, 48[rsp]
	.seh_setframe	rbp, 48
	.seh_endprologue
	mov	QWORD PTR 32[rbp], rcx
	mov	QWORD PTR 40[rbp], rdx
	mov	rax, QWORD PTR 32[rbp]
	mov	rax, QWORD PTR [rax]
	mov	QWORD PTR -16[rbp], rax
	lea	rax, -16[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
	mov	rbx, rax
	mov	rax, QWORD PTR 40[rbp]
	mov	rax, QWORD PTR [rax]
	mov	QWORD PTR -8[rbp], rax
	lea	rax, -8[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
	cmp	rbx, rax
	setl	al
	add	rsp, 56
	pop	rbx
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1EEEES2_ILx1ELx1000EExLb1ELb0EE6__castIxS5_EES4_RKNS1_IT_T0_EE,"x"
	.linkonce discard
	.globl	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1EEEES2_ILx1ELx1000EExLb1ELb0EE6__castIxS5_EES4_RKNS1_IT_T0_EE
	.def	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1EEEES2_ILx1ELx1000EExLb1ELb0EE6__castIxS5_EES4_RKNS1_IT_T0_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1EEEES2_ILx1ELx1000EExLb1ELb0EE6__castIxS5_EES4_RKNS1_IT_T0_EE
_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1EEEES2_ILx1ELx1000EExLb1ELb0EE6__castIxS5_EES4_RKNS1_IT_T0_EE:
.LFB3151:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 48
	.seh_stackalloc	48
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	rax, QWORD PTR 16[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
	mov	rcx, rax
	movabs	rdx, 2361183241434822607
	mov	rax, rcx
	imul	rdx
	mov	rax, rdx
	sar	rax, 7
	sar	rcx, 63
	mov	rdx, rcx
	sub	rax, rdx
	mov	QWORD PTR -8[rbp], rax
	lea	rdx, -8[rbp]
	lea	rax, -16[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono8durationIxSt5ratioILx1ELx1EEEC1IxvEERKT_
	mov	rax, QWORD PTR -16[rbp]
	add	rsp, 48
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
	.def	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv:
.LFB3152:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	rax, QWORD PTR 16[rbp]
	mov	rax, QWORD PTR [rax]
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxS1_ILx1ELx1EEvEERKNS0_IT_T0_EE,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxS1_ILx1ELx1EEvEERKNS0_IT_T0_EE
	.def	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxS1_ILx1ELx1EEvEERKNS0_IT_T0_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxS1_ILx1ELx1EEvEERKNS0_IT_T0_EE
_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxS1_ILx1ELx1EEvEERKNS0_IT_T0_EE:
.LFB3155:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 48
	.seh_stackalloc	48
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	QWORD PTR 24[rbp], rdx
	mov	rax, QWORD PTR 24[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000EEEExS2_ILx1ELx1EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE
	mov	QWORD PTR -8[rbp], rax
	lea	rax, -8[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
	mov	rdx, QWORD PTR 16[rbp]
	mov	QWORD PTR [rdx], rax
	nop
	add	rsp, 48
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000000000EEEES2_ILx1000000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1000EEEES4_RKNS1_IT_T0_EE,"x"
	.linkonce discard
	.globl	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000000000EEEES2_ILx1000000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1000EEEES4_RKNS1_IT_T0_EE
	.def	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000000000EEEES2_ILx1000000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1000EEEES4_RKNS1_IT_T0_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000000000EEEES2_ILx1000000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1000EEEES4_RKNS1_IT_T0_EE
_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000000000EEEES2_ILx1000000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1000EEEES4_RKNS1_IT_T0_EE:
.LFB3156:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 48
	.seh_stackalloc	48
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	rax, QWORD PTR 16[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1000EEE5countEv
	imul	rax, rax, 1000000
	mov	QWORD PTR -8[rbp], rax
	lea	rdx, -8[rbp]
	lea	rax, -16[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000000000EEEC1IxvEERKT_
	mov	rax, QWORD PTR -16[rbp]
	add	rsp, 48
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000EEEExS2_ILx1ELx1EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE,"x"
	.linkonce discard
	.globl	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000EEEExS2_ILx1ELx1EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE
	.def	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000EEEExS2_ILx1ELx1EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000EEEExS2_ILx1ELx1EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE
_ZNSt6chrono13duration_castINS_8durationIxSt5ratioILx1ELx1000EEEExS2_ILx1ELx1EEEENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES8_E4typeERKNS1_IT0_T1_EE:
.LFB3219:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 32
	.seh_stackalloc	32
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	rax, QWORD PTR 16[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000EEEES2_ILx1000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1EEEES4_RKNS1_IT_T0_EE
	add	rsp, 32
	pop	rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000EEEES2_ILx1000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1EEEES4_RKNS1_IT_T0_EE,"x"
	.linkonce discard
	.globl	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000EEEES2_ILx1000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1EEEES4_RKNS1_IT_T0_EE
	.def	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000EEEES2_ILx1000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1EEEES4_RKNS1_IT_T0_EE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000EEEES2_ILx1000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1EEEES4_RKNS1_IT_T0_EE
_ZNSt6chrono20__duration_cast_implINS_8durationIxSt5ratioILx1ELx1000EEEES2_ILx1000ELx1EExLb0ELb1EE6__castIxS2_ILx1ELx1EEEES4_RKNS1_IT_T0_EE:
.LFB3251:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 48
	.seh_stackalloc	48
	.seh_endprologue
	mov	QWORD PTR 16[rbp], rcx
	mov	rax, QWORD PTR 16[rbp]
	mov	rcx, rax
	call	_ZNKSt6chrono8durationIxSt5ratioILx1ELx1EEE5countEv
	imul	rax, rax, 1000
	mov	QWORD PTR -8[rbp], rax
	lea	rdx, -8[rbp]
	lea	rax, -16[rbp]
	mov	rcx, rax
	call	_ZNSt6chrono8durationIxSt5ratioILx1ELx1000EEEC1IxvEERKT_
	mov	rax, QWORD PTR -16[rbp]
	add	rsp, 48
	pop	rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev5, Built by MSYS2 project) 15.1.0"
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSo5flushEv;	.scl	2;	.type	32;	.endef
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c;	.scl	2;	.type	32;	.endef
	.def	_ZNSirsERd;	.scl	2;	.type	32;	.endef
	.def	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEd;	.scl	2;	.type	32;	.endef
	.def	nanosleep64;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.p2align	3, 0
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.p2align	3, 0
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
