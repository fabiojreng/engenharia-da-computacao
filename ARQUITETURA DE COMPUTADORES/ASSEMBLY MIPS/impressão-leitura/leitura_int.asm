.data
	idade: .asciiz "Qual sua idade: "
	saida_idade: .asciiz "Sua idade é: "

.text
	
	li $v0, 4 # indica a impressão de uma string
	la $a0, idade 
	syscall
	
	li $v0, 5 # leitura de inteiro
	syscall
	move $t0, $v0 # guarda o valor digitado em t0
	
	li $v0, 4 # volto a indicar a impressão de uma string 
	la $a0, saida_idade 
	syscall
	
	li $v0, 1 # impressão de inteiro
	move $a0, $t0 # guarda o valor de t0 em a0 para ser impresso
	syscall