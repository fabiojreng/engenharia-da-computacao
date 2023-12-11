.data 
	msg: .asciiz "Olá, Mundo!" # mensagem a ser exibida 
.text
	li $v0, 4 # instrução para impressão de String
	la $a0, msg # indicar o endereço em que está a msg
	syscall # comando para imprimir
	
	
	
