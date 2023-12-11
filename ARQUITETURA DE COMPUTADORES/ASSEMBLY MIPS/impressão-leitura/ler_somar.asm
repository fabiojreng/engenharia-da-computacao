.data
	numero1: .asciiz "Digite o primeiro valor: "
	numero2: .asciiz "Digite o segundo valor: "
	resultado: .asciiz "Soma igual a: "
.text
	# impressão da primeira msg
	li $v0, 4
	la $a0, numero1
	syscall
	# leitura do primeiro valor
	li $v0, 5
	syscall
	# guardar o valor inserido em outro registrador
	move $t0, $v0

	# impressão da segunda msg	
	li $v0, 4
	la $a0, numero2
	syscall
	# leitura do primeiro valor
	li $v0, 5
	syscall
	# guardar o valor inserido em outro registrador
	move $t1, $v0
	
	# impressão da terceira msg	
	li $v0, 4
	la $a0, resultado
	syscall
	# guardar o valor da soma em a0
	add $a0, $t0, $t1
	# impressão de inteiro
	li $v0, 1
	syscall
	
	