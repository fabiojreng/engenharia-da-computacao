.data
	caractere: .byte 'A' # caracter a ser impresso
.text
	li $v0, 4 # imprimir char
	la $a0, caractere # carrega o endereço em que está o caractere
	syscall # comando para imprimir
	
	li $v0, 10 # encerra o programa
	syscall
