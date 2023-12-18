.data
	msg: .asciiz "Digite uma string: "
	entrada:	
		.align 2
		.space  30  # espaço para armazenar a string de entrada
	saida:  
		.align 2
		.space  30  # espaço para armazenar a string de saída

.text

.main:
    # imprimir msg
    li $v0, 4
    la $a0, msg
    syscall

    # leitura da string de entrada
    li $v0, 8
    la $a0, entrada
    li $a1, 30  # tamanho máximo da entrada
    syscall

    # carregar o endereço da entrada e saída da string 
    la $t0, entrada
    la $t1, saida

percorrer:
    lb $t2, ($t0) # guarda em $t2 o endereço do byte de $t0 - string de entrada

    beq $t2, $zero, sair  # se o caractere for nulo, termina

    # verifica se o caractere é uma letra minúscula
    li $t3, 'a'
    li $t4, 'z'
    blt $t2, $t3, maiuscula # se $t2 for menor que $t3 (a-97)
    bgt $t2, $t4, maiuscula # se $t2 for maior que $t4 (z-122)

    # converte para maiúscula
    sub $t2, $t2, 32  # subtrai 32 para converter minúscula em maiúscula

	maiuscula:
 	   sb $t2, ($t1)  # coloca o endereço de $t2 em $t1 - string de saída

	   # incrementar as posições da string -  ir para o próximo byte
 	   addi $t0, $t0, 1
 	   addi $t1, $t1, 1

  	   j percorrer
	
sair:
    # imprime a string convertida
    li $v0, 4
    la $a0, saida
    syscall

    # encerra o programa
    li $v0, 10
    syscall

