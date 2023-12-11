.data
	msg: .asciiz "Digite um valor inteiro: "
	par: .asciiz "par"
	impar: .asciiz "impar, resta: "
	
.text
	# imprimir a msg
	li $v0, 4
	la $a0, msg
	syscall
	
	# ler o valor
	li $v0, 5
	syscall
	
	# divisão
	li $t0, 2
	div $v0, $t0
	mfhi $t1
	
	beq $t1, $zero, imprimir_par # verifica se é par -> resto da divisão igual a zero
	# imprime impar
	li $v0, 4
	la $a0, impar
	syscall
	
	# imprime o resto
	li $v0, 1
	move $a0, $t1
	syscall
	jal encerrar
	
	imprimir_par:
		li $v0, 4
		la $a0, par
		syscall
		jal encerrar
	
	encerrar:
		li $v0, 10
		syscall
	      
