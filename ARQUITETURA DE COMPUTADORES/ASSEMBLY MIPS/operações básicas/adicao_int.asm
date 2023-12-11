.text
	li $t0, 2 # inserindo 2 ao registrador t0
	li $t1, 3 # inserindo 3 ao registrador t1
	
	li $v0, 1 # imprimir numero inteiro
	add $s0, $t0, $t1 # adicionando ao registrador s0 a soma de t0 e t1

	addi $s1, $t0, 2 # adicionando ao registrador s1 a soma de t0 com o inteiro 2
	
	move $a0, $s0 # movendo do registrador s0 para o registrador a0
	
	syscall