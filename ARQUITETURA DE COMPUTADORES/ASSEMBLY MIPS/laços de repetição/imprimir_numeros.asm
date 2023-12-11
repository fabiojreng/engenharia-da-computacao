.data
	quebra_linha: .asciiz "\n"
	encerrar: .asciiz "Encerrado!"
.text
	move $t0, $zero
	while:
		beq $t0, 10, saida
		
		li $v0, 1
		addi $t0, $t0, 1
		move $a0, $t0
		syscall
		
		li $v0, 4
		la $a0, quebra_linha
		syscall
		
		j while
		
	saida:
		li $v0, 4
		la $a0, encerrar
		syscall
		
		li $v0, 10
		syscall
		
			
