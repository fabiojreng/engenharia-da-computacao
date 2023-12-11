.data 
	numero1: .word -3
	numero2: .word 2
	resultado: .asciiz "Resultado igual: "
	
.text 

	lw $t0, numero1
	lw $t1, numero2
	li $t2, 0
	li $t3, 0
	
	beq $t0, $zero, encerrar
	beq $t1, $zero, encerrar
		
	bgt $t0, $zero, percorrer
	jal trocar
	bgt $t0, $zero, percorrer
	
	jal encerrar
	
	percorrer:
		beq $t0, $t3, exibir
		
		add $t2, $t2, $t1 
		addi $t3, $t3, 1 
		j percorrer
	
	encerrar:
		li $v0, 10
		syscall
	
	exibir:
		li $v0, 4
		la $a0, resultado
		syscall
		
		move $a0, $t2
		li $v0, 1
		syscall
		
		jal encerrar
	
	trocar:
		add $t0, $t0, $t1 # -> $t0 = 10 + 20 = 30
		sub $t1, $t0, $t1 # -> $t1 = 30 - 20 = 10
		sub $t0, $t0, $t1 # -> $t0 = 30 - 10 = 20
		jr $ra
	