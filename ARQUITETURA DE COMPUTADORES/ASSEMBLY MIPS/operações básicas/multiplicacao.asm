.text
	li $t0, 5 # inserindo valor 5 em t0
	li $t1, 6 # inserindo valor 6 em t1
	
	li $v0, 1 # impressão de inteiro
	
	mul $a0, $t0, $t1 # multiplica t0 com t1 e guarda em a0 para impressão
	syscall
	
	
	 
	