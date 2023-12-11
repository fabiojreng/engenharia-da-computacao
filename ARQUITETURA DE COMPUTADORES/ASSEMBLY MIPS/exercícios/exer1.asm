.data 
	espaco: .byte ' '
.text

	li $t0, 33 # inicio dos caracteres na tabela ascii
	li $t1, 127 # final dos caracteres na tabela ascii
	
	percorrer:
		# enquanto o inicio da tabela for diferente do final faço a impressão
		beq $t0, $t1, encerrar
		li $v0, 11 # indico a impressao de um caractere 
		move $a0, $t0
		syscall
		
		jal imprimirEspaco
		addi $t0, $t0, 1 # incrementa 1 no endereço dos caracteres 
		j percorrer
		
	encerrar:
		li $v0, 10
		syscall
	
	imprimirEspaco:
		li $v0, 4
		la $a0, espaco
		syscall
		jr $ra
