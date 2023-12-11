.data
	Array:
		.align 2
		.space 16
	espaco: .byte ' '
.text
	
	move $t0, $zero # indice do array
	li $t1, 16 # tamanho do array -> 4 bytes para cada inteiro = 16 bytes
	
	array:
		beq $t0, $t1, encerrar # encerra quando o valor do indice for igual o tamanho do array
		# leitura do inteiro
		li $v0, 5
		syscall
		
		move $s0, $v0
		sw $s0, Array($t0) # adiciona os valores dentro do array no indice determinado 
		addi $t0, $t0, 4 # incrementa para a próxima posição do array
		j array

	encerrar:
	move $t0, $zero # reiniciando indice do array
		imprimir:
			beq $t0, $t1, sairImpressao
			li $v0, 1
			lw $a0, Array($t0) # adiciona o valor do array, no indice determinado, no registrador a0
			syscall
			
			li $v0, 4
			la $a0, espaco
			syscall
			
			addi $t0, $t0, 4 # incrementa para a próxima posição do array
			j imprimir
	sairImpressao:
		li $v0, 10
		syscall
