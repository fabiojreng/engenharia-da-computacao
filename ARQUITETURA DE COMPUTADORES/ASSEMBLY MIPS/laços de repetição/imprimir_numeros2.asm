.data
	msg: .asciiz "Digite o valor: "
	espaco: .byte ' '
.text
	# imprime a msg
	li $v0, 4
	la $a0, msg
	syscall
	# leitura do inteiro
	li $v0, 5
	syscall
	
	move $t0, $v0 # guarda o valor lido em t0
	move $t1, $zero # incializa t1 com o valor 0
	
	percorrer:
		# enquanto t1 < t0, faço a impressão
		bgt $t1, $t0, saida # verifica se $t1 é maior que $t0
		
		# imprime o valor
		li $v0, 1
		move $a0, $t1
		syscall
		# imprime espaco entre os valores
		li $v0, 4
		la $a0, espaco
		syscall
		
		addi $t1, $t1, 1 # incrementa o valor de t1
		j percorrer # chama a funçao novamente 

	saida:
		li $v0, 10
		syscall
