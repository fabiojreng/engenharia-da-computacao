.data
	msg_valor1: .asciiz "Digite o primeiro valor: " 
	msg_valor2: .asciiz "Digite o segundo valor: "
	msg_result: .asciiz "Resultado: "
	zero: .float 0.0
	cem: .float 100.0
.text
	# imprimir a msg1
	li $v0, 4
	la $a0, msg_valor1
	syscall
	# leitura do primeiro float 
	li $v0, 6
	syscall # valor inserido no Coporc $f0
	
	lwc1 $f1, zero # atribuindo o valor 0.0 para o Coproc $f1
	
	add.s $f2, $f1, $f0 # fazendo a soma de float: $f2 = 0.0 + $f0 -> primeiro valor 
	
	# imprimir a msg2
	li $v0, 4
	la $a0, msg_valor2
	syscall
	# leitura do segundo float 	
	li $v0, 6
	syscall
	
	add.s $f3, $f1, $f0 # fazendo a soma de float: $f3 = 0.0 + $f0 -> segundo valor 
	
	# imprimir msg_result
	li $v0, 4
	la $a0, msg_result
	syscall
	
	add.s $f12, $f2, $f3 # fazendo a soma de float: $f12 = $f2 + $f3 -> valor a ser impresso 
	
	# fazendo arredondamento para 2 casas decimais 
	lwc1 $f4, cem
	mul.s $f12, $f12, $f4	
	div.s $f12, $f12, $f4
	
	#imprimir float
	li $v0, 2
	syscall
	
	
	
	
	
	
	
