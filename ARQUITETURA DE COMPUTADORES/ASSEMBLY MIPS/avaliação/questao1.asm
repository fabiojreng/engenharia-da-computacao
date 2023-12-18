.data
	msg1: .asciiz "Digite o primeiro valor: "
	msg2: .asciiz "Digite o segundo valor: "
	res: .asciiz "Resultado igual: "
	espaco: .asciiz "\n"
.text
	.main:
		jal leitura1
		jal leitura2
		jal somar
		jal subtrair
		jal multiplicar
		jal dividir 
	
	leitura1:
		li $v0, 4
		la $a0, msg1
		syscall
		
		li $v0, 5
		syscall
		move $t0, $v0
		jr $ra
	
	leitura2:
		li $v0, 4
		la $a0, msg2
		syscall
	
		li $v0, 5
		syscall	
		move $t1, $v0
		jr $ra
	
	resultado:
		li $v0, 4
		la $a0, res
		syscall	
		
		move $a0, $t2
		li $v0, 1
		syscall
		
		li $v0, 4
		la $a0, espaco
		syscall
		jr $ra
		
	somar:
		add $t2, $t0, $t1
		jal resultado
	
	subtrair:
		sub $t2, $t0, $t1
		jal resultado
	
	multiplicar: 
		mul $t2, $t0, $t1
		jal resultado
	
	dividir:
		div $t0, $t1
		mflo $t2
		jal resultado
		jal encerrar
		
	encerrar:
		li $v0, 10
		syscall
	
	
	
