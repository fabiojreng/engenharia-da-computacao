.data
	msg: .asciiz "Digite o valor: "
	impar: .asciiz "impar"
	par: .asciiz "par"
	negativo: .asciiz "negativo"
.text
	
	la $a0, msg # indica o endereço da msg para ser impressa
	jal imprimirMsg 
	jal leituraValor
	move $a0, $v0 
	
	jal verificarPositivo
	bge $v0, $zero, verificarImparPar
	jal encerrarModulo
	
	imprimirMsg:
		li $v0, 4
		syscall
		jr $ra
	
	leituraValor:
		li $v0, 5
		syscall
		jr $ra
		
	verificarPositivo:
		li $t0, 1
		div $v0, $t0
		mflo $v0
		jr $ra
	
	verificarImparPar:
		li $t1, 2
		div $a0, $t1
		mfhi $t2
		beq $t2, $zero, imprimirPar
		jal imprimirImpar
	
	imprimirImpar:
		la $a0, impar
		jal imprimirMsg
		jal encerrarModulo
	
	imprimirPar:
		la $a0, par
		jal imprimirMsg
		jal encerrarModulo
	
	encerrarModulo:
		li $v0, 10
		syscall
		jr $ra
	
