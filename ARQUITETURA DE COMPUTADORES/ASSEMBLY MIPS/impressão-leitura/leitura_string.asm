.data
	pergunta: .asciiz "Qual seu nome: "
	saudacao: .asciiz "Olá, "
	nome: .space 30
.text
	# impressão da primeira msg
	li $v0, 4
	la $a0, pergunta
	syscall
	
	# leitura da string 
	li $v0, 8
	la $a0, nome 
	la $a1, 30
	syscall
	# guarda o nome em outro registrador
	move $t0, $a0
	
	# impressão da segunda msg
	li $v0, 4
	la $a0, saudacao
	syscall

	li $v0, 4
	move $a0, $t0
	syscall
	
