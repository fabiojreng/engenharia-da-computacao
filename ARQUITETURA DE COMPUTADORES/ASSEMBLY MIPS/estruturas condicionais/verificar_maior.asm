.data
	valor1: .asciiz "Digite um valor inteiro: "
	valor2: .asciiz "Digite outro valor inteiro: "
	maior: .asciiz "O maior é: "
	iguais: .asciiz "Os valores são iguais"		
.text
	# imprimir a msg
	li $v0, 4
	la $a0, valor1
	syscall
	
	# ler o valor
	li $v0, 5
	syscall
	
	move $t0, $v0 # guarda o primeiro valor
	
	# imprimir a msg
	li $v0, 4
	la $a0, valor2
	syscall
	
	# ler o valor
	li $v0, 5
	syscall

	move $t1, $v0 # guarda o segundo valor
	
	beq $t0, $t1, valores_iguais # verifica se t0 e t1 são iguais
	bgt $t0, $t1, t0_maior # verifica se t0 é maior
	
	# para t1 maior que t0
	t1_maior:
		# imprime msg de maior
		li $v0, 4
		la $a0, maior
		syscall
		# imprime o valor de quem é maior
		move $a0, $t1
		li $v0, 1
		syscall
		jal encerrar

	valores_iguais:
		li $v0, 4
		la $a0, iguais
		syscall
		jal encerrar
	
	t0_maior:
		li $v0, 4
		la $a0, maior
		syscall
		move $a0, $t0
		li $v0, 1
		syscall
		jal encerrar
	
	encerrar: 
		li $v0, 10
		syscall
	
