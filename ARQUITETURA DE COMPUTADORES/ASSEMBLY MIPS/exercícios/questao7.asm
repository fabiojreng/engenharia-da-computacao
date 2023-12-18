# Escreva um programa em assembly, para trocar o conteúdo de dois registradores $t0 e $t2. Você não pode usar outros registradores.

.data
	msg1: .asciiz "Digite o primeiro valor: "
	msg2: .asciiz "Digite o segundo valor: "
	result1: .asciiz "Primeiro valor: "
	result2: .asciiz "     Segundo valor: "
.text 

	li $v0, 4
	la $a0, msg1
	syscall
	
	li $v0, 5
	syscall
	move $t0, $v0

	li $v0, 4
	la $a0, msg2
	syscall
	
	li $v0, 5
	syscall
	move $t1, $v0
	
	
	add $t0, $t0, $t1 # -> $t0 = 10 + 20 = 30
	sub $t1, $t0, $t1 # -> $t1 = 30 - 20 = 10
	sub $t0, $t0, $t1 # -> $t0 = 30 - 10 = 20
	
	li $v0, 4
	la $a0, result1
	syscall
	
	add $a0, $zero, $t0
	li $v0, 1
	syscall
	
	li $v0, 4
	la $a0, result2
	syscall
	
	add $a0, $zero, $t1
	li $v0, 1
	syscall
	
	