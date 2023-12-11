.data
	msg: .asciiz"Digite um numero:  "
	msgPrimo: .asciiz"Valor primo"

.text

	.main:
	#exibindo a primeira mensagem de entrada
	li $v0, 4
	la $a0, msg
	syscall

	#lendo o primeiro numero
	li $v0, 5
	syscall

	move $t0, $v0
	li $t1, 2
			
	jal condicao1			
	jal verificarPrimo
	
	verificarPrimo:
		div $t0, $t1
		mfhi $t2
		beq $t2, $zero, encerrar
		jal imprimirPrimo
		
	condicao1:
		beq $t0, $t1, imprimirPrimo
		jr $ra
		
	imprimirPrimo:
		li $v0, 4
		la $a0, msgPrimo
		syscall
				
		jal encerrar
	
	encerrar:
		li $v0, 10
		syscall


	
