package modelo;

import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Random;

public class Quiz{ 
    private List<Pergunta> perguntas;
	private LogicaQuiz logicaquiz;
	String elimin;
	String opc;
	private int aleat = 0;
	private int acm = 0;
	LogicaQuiz logica = new LogicaQuiz();
	private String[] letras = {"a","b","c","d","e"};
	private String teste;
	private int i = 0;
	private String alteCorreta ;
	private int[] sorteado = {0,0,0,0,0};
	private int encerra = 0;
	
	Scanner scan = new Scanner(System.in);
	Random r = new Random();
	
	// CONSTRUTOR
    public Quiz() {
		perguntas = new ArrayList();
	}
    
	public LogicaQuiz getLogicaquiz() {
		return logicaquiz;
	}
	
	public void setLogicaquiz(LogicaQuiz logicaquiz) {
		this.logicaquiz = logicaquiz;
	}
	
	public List<Pergunta> getPerguntas() {
		return perguntas;
	}
	
	public void setPerguntas(List<Pergunta> perguntas) {
		this.perguntas = (List<Pergunta>) perguntas;
	}
	
	// ONDE A MAGICA ACONTECE
	public void questao() {
		boolean acerto = false;
		
		for(Pergunta pergunta : perguntas) {
			encerra=+1;
			
			logica.setValor(pergunta.getvalorQuestao());
			// IMPRESSÃO DA QUESTAO E VALOR
			alteCorreta = pergunta.getAlternativaCorreta();
			System.out.println(pergunta.getQuestao());
			System.out.println("Valor da questão: R$"+pergunta.getvalorQuestao());
			List<String> itens = pergunta.getAlternativas();
			
			if(alteCorreta.equals("a")) {
				sorteado[0]= 1;
			}else if(alteCorreta.equals("b")) {
				sorteado[1]= 1;
			}else if(alteCorreta.equals("c")) {
				sorteado[2]= 1;
			}else if(alteCorreta.equals("d")) {
				sorteado[3]= 1;
			}else {
				sorteado[4]= 1;
			}
			// IMPRESSÃO DE ALTERNATVAS
			for(int i = 0; i < itens.size(); i++) {
				System.out.println(itens.get(i));
			}
			
			// ELIMINACAO DE ALTERNATIVAS AUTOMATIZADO
			System.out.println("Deseja eleminar alguma alternativa? S/N");
			opc = scan.nextLine();
			if(opc.equals("s") || opc.equals("S")) {
				
				pergunta.setvalorQuestao(pergunta.getvalorQuestao()-((pergunta.getvalorQuestao()/5) * 2));
				// EXECUTA ENQUANTO O NUMERO DE ALTERNATIVAS EXISTENTES FOR DUAS
				remove(itens);

				System.out.println(pergunta.getQuestao());
				System.out.println("Valor da questão: R$"+pergunta.getvalorQuestao());
				
				for(i = 0; i<itens.size(); i++) {
					System.out.println(itens.get(i) );
				}
				
				
			//bota 0 nas posições;
			for(i=0; i<=4; i++) {
				sorteado[i] = 0;
				}
			}
			
			System.out.println("Insira sua Alternativa: ");
		    opc = scan.nextLine();
		    System.out.println("Alternativa Correta: "+pergunta.getAlternativaCorreta());
			if(opc.equals(pergunta.getAlternativaCorreta())) {
				logica.setValor(pergunta.getvalorQuestao());
				montaQuiz(1);
			}else {
				logica.setValor(pergunta.getvalorQuestao());
				montaQuiz(0);
			}
			
		}
		logica.Encerra();
	
	}
	public void remove(List<String> itens) {
		while(acm!=2) {
			aleat = r.nextInt(itens.size());
			do{
				// AO INVES DE ALEAT RECEBER UM NUMERO ESTATICO, RECEBE UM DINAMICO (A PROPRIA LIST). RESOLVEU O PROBLEMA DE ELIMINAR A ULTIMA ALTERNATIVA
				aleat = r.nextInt(itens.size()-1);
			}while(aleat > (itens.size()-1));
			
			teste = letras[aleat];
			
			//caso a alternativa ja tenha sido sorteada;
			 if(sorteado[aleat] == 1 || teste.equals(alteCorreta)) {
				 
				do {
					
					aleat = r.nextInt(itens.size());
					teste = letras[aleat];
				}while(sorteado[aleat] == 1);
				
				do {
					aleat = r.nextInt(itens.size());
					teste = letras[aleat];
				}while(teste.equals(alteCorreta));
				
				sorteado[aleat] = 1;
				itens.remove(aleat);
				teste = letras[aleat];
				
				
			}
			//remover alternativa caso os ifs sejam falsos;
			else {
				
				if(teste.equals(alteCorreta)) {
					
					do {
						aleat = r.nextInt(itens.size());
						teste = letras[aleat];
					}while(teste.equals(alteCorreta));

					// NOS ESPAÇOS EM QUE SÃO 0, TORNAM-SE 1, PRA IDENTIFICAR A LETRA ELIMINADA
					sorteado[aleat] = 1;
					itens.remove(aleat);
					
				}else {
					sorteado[aleat] = 1;
					itens.remove(aleat);
					teste = letras[aleat];
					
				}
		}
			
			acm+=1;
			
		}
		acm = 0;
		
	}
	public void montaQuiz(int valida) {
		if(valida == 1) {
			System.out.println("Acertou a questão!");
			logica.Acerto(true);
			logica.Imprime();
		}else {
			System.out.println("ERROU A QUESTÃO");
			logica.Acerto(false);
			logica.Imprime();
		}
	}
}
