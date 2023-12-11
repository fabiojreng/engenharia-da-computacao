.data 
	Array:
		.align 2
		.space 16
	nome: .space 10
	espaco: .byte ' '
	
.text
	move $t0, $zero 
	li $t1, 4 
	
	array:
		beq $t0, $t1, encerrar # condição de parada do while -> quando o indice for igual ao tamanho
		# leitura da string
		li $v0, 8
		la $a0, Array
		la $a1, 10
		syscall
		
		move $s0, $a0
		# colocar valores dentro do array
		sw $s0, Array($t0)
		
		# incrementar o valor do indice	
		addi $t0, $t0, 4
		j array
		
	encerrar:
	move $t0, $zero
	
		imprimir:
			beq $t0, $t1, sairImpressao
			li $v0, 4
			lw $a0, Array($t0)
			syscall
		
			addi $t0, $t0, 4
			j imprimir

	sairImpressao:
		li $v0, 10
		syscall
			
		
