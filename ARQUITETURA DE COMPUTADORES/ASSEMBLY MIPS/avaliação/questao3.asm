.data
	espaco: .byte ' '
	Array:
		.align 2
		.space 16
		
.text 

	move $t0, $zero
	li $t1, 16
	
	inserir:
		beq $t0, $t1, encerrar
		li $v0, 5
		syscall
		
		blt $v0, $zero, sair # verifica se é maior que 0
		
		move $s0, $v0
		sw $s0, Array($t0)
		addi $t0, $t0, 4
		j inserir
		
	encerrar:
	move $t0, $zero
		imprimir:
		beq $t0, $t1, sair
		li $v0, 1
		lw $a0, Array($t0)
		syscall
		
		li $v0, 4
		la $a0, espaco
		syscall	
		addi $t0, $t0, 4
		j imprimir	
	
	sair:
		li $v0, 10
		syscall
	
		
