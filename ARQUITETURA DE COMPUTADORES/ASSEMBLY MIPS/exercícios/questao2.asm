.data
	msg1: .asciiz "Digite o valor: "
	par: .asciiz "Numero par "
	impar: .asciiz "Numero impar "
	positivo: .asciiz "e positivo"
	negativo: .asciiz "e negativo"
	zero: .asciiz "e igual a ZERO"	
.text
	.main:
		jal leituraValor
		jal verificarValor

	leituraValor:
		# imprimir a msg1
		li $v0, 4
		la $a0, msg1
		syscall
		# leitura do inteiro
		li $v0, 5
		syscall
		
		li $t0, 2 # guarda o valor 2 para divisao
		div $v0, $t0 # divide o valor inserido pelo usuario por 2
		move $t2, $v0 # guarda o valor digitado pelo usuário
		mfhi $t1 # pega o resto da divisão
	
	verificarValor:
		beq $t1, $zero, numeroPar 
		jal verificarImpar
		
		numeroPar:
			li $v0, 4
			la $a0, par
			syscall
			jal verificarZero
			
	verificarImpar:
		li $v0, 4
		la $a0, impar
		syscall
		jal verificarZero
	
	verificarZero:
		beq $t2, $zero, imprimirZero
		bgt $t2, $zero, imprimirPositivo
		jal imprimirNegativo
		jal encerrar
	
		imprimirZero:
			li $v0, 4
			la $a0, zero
			syscall
			jal encerrar
	
		imprimirPositivo:
			li $v0, 4
			la $a0, positivo
			syscall
			jal encerrar
		
		imprimirNegativo:
			li $v0, 4
			la $a0, negativo
			syscall	
			jal encerrar
		
	encerrar:
		li $v0, 10
		syscall
		
