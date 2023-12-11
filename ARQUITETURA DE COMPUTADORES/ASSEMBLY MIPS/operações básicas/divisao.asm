.text

	li $t0, 32
	li $t1, 5
	
	div $t0, $t1 # faz a divisão entre t0 e t1
	
	mflo $s0 # coloca a parte inteira da divisão em s0
	
	mfhi $s1 # coloca o resto da divisão em s1
	