.data 
	int: .word 21 # valor a ser impresso 
.text
	li $v0, 1 # instrução para impressão de int
	lw $a0, int # atribuindo o valor de int para a0
	syscall 
	
	li $v0, 10 # encerrar o programa
	syscall
