package modelo;


public class LogicaQuiz {
	
	
	private static int vida = 1; // CONTADOR DE VIDA
	private int maxVida = 0; // CONTADOR DE MAXIMO DE VIDA
	private double saldo = 0; // CONTADOR DE DA POTUACAO 
	private double maxSaldo = 0;// CONTADOR DO MAXIMO DA PONTUACAO
	private double valor; // RECEPTOR DO VALOR DA QUESTAO
	private int qtdAcertos = 0; // CONTADOR DA QUANTIDADE DE ACERTOS
	private int qtdErros = 0; // CONTADOR  DA QUANTIDADE DE ERROS
	
	// SISTEMA DE PONTOS
	public void Acerto(boolean acerto) {
		
		if(acerto) {
			
			setQtdAcertos(getQtdAcertos()+1);
			setVida(getVida()+5);
			
			if(vida>=maxVida) {// ACABEI DE ADICIONAR
				maxVida = vida;
			}
			
			setSaldo(getSaldo()+getValor());
			
			if(saldo>=maxSaldo) {// ACABEI DE ADICIONAR
				maxSaldo = saldo;
			}
			
		}else {
			setQtdErros(getQtdErros()+1);
			setVida(getVida()-7);
			setSaldo(getSaldo()-(getValor()/2));// ACABEI DE ADICIONAR
			if(getVida()<0) {
				setVida(0);
				
				Encerra();
			}
		}
	}
	// IMPRIMIR PONTOS
	public void Imprime() {
		System.out.println("\n\nAcertos: "+getQtdAcertos() + 
						   "\nErros: "+getQtdErros() + 
						   "\nSaldo: "+ getSaldo());
		System.out.println("Vidas "+getVida()+"\n\n");
	}
	
	// ENCERRA O PROGRAMA
	public void Encerra() {
		System.out.println("\n\n\n\n\n\n\n\n\n\n\n\n");
		System.out.println("#####THE END#####");
		Imprime();
		System.exit(0);
	}
	// GET E SET VIDA
	public static int getVida() {
		return vida;
	}
	public static void setVida(int vida) {
		LogicaQuiz.vida = vida;
	}
	
	// GET E SET SALDO
	public double getSaldo() {
		return saldo;
	}
	public void setSaldo(double d) {
		this.saldo = d;
	}
	
	// GET E SET QTDERROS
	public void setQtdErros(int qtdErros) {
		this.qtdErros = qtdErros;
	}
	public int getQtdErros() {
		return qtdErros;
	}
	
	// GET E SET QTDACERTOS
	public int getQtdAcertos() {
		return qtdAcertos;
	}
	public void setQtdAcertos(int qtdAcertos) {
		this.qtdAcertos = qtdAcertos;
	}
	
	//GET E SET VALOR
	public void setValor(double valor) {
		this.valor = valor;
	}
	public double getValor() {
		return valor;
	}
}
