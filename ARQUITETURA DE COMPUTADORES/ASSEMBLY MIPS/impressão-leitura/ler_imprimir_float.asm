.data
	msg: .asciiz "Digite um valor real/float: "
	result: .asciiz "Valor: "
	zero: .float 0.0
.text
	# imprimir a msg
	li $v0, 4
	la $a0, msg
	syscall
	
	# leitura do float -> salvo no Coproc $f0
	li $v0, 6
	syscall
	
	lwc1 $f1, zero # atribuído o valor 0.0 para $f1 -> poderia ser qualquer registrador, menos $f0 e $f12
	add.s $f12, $f1, $f0 # fazendo a soma de float para $f12, para que possa ser impressso
	
	li $v0, 4
	la $a0, result
	syscall
	
	# imprimir o valor float
	li $v0, 2
	syscall
	
	