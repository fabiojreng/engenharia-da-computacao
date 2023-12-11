package app;
import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Collection;

import modelo.LogicaQuiz;
import modelo.Pergunta;
import modelo.Quiz;

public class Principal {

	public static void main(String[] args) {
		// ATRIBUTOS DA PRINCIPAL
		int respMenu = 0, opalt_que = 0;
		
		// ATRIBUTOS A SETAR EM ALTERAR
		int alt_val = 0;
		String alt_que, alt_alt, alt_cor;
		
		// OBJETO PARA LER OS ATRIBUTOS
		Scanner scanner = new Scanner(System.in);
		
		//classe Quiz
		Quiz quiz = new Quiz();
		
		// INSERCAO DE VALORES PARA PARA O OBJETO DA PRIMEIRA QUESTAO: QUESTAO, ALTERNATIVAS, ALTERNATIVA CORRETA E VALOR DA QUESTAO 
		Pergunta a1 = new Pergunta();
		a1.setQuestao("1 - De quem é a famosa frase “Penso, logo existo”?");
		a1.setAlternativa("a) Platão");
                a1.setAlternativa("b) Galileu Galilei");
		a1.setAlternativa("c) Descartes");//certa
		a1.setAlternativa("d) Sócrates");
		a1.setAlternativa("e) Francis Bacon");
		a1.setvalorQuestao(300);
		a1.setAlternativaCorreta("c");
		
		// INSERCAO DE VALORES PARA PARA O OBJETO DA SEGUNDA QUESTAO: QUESTAO, ALTERNATIVAS, ALTERNATIVA CORRETA E VALOR DA QUESTAO 
		Pergunta a2 = new Pergunta();
		a2.setQuestao("2 - De onde é a invenção do chuveiro elétrico?");
		a2.setAlternativa("a) França");
		a2.setAlternativa("b) Inglaterra");
		a2.setAlternativa("c) Itália");
		a2.setAlternativa("d) Austrália");
		a2.setAlternativa("e) Brasil");//certa
		a2.setvalorQuestao(300);
		a2.setAlternativaCorreta("e");

		// INSERCAO DE VALORES PARA PARA O OBJETO DA TERCEIRA QUESTAO: QUESTAO, ALTERNATIVAS, ALTERNATIVA CORRETA E VALOR DA QUESTAO 
		Pergunta a3 = new Pergunta();
		a3.setQuestao("3 - Qual o menor e o maior país do mundo?");
		a3.setAlternativa("a) Vaticano e Rússia");//certa
		a3.setAlternativa("b) Mônaco e Canadá");
		a3.setAlternativa("c) Malta e Estados Unidos");
		a3.setAlternativa("d) Chile e Rússia");
		a3.setAlternativa("e) São Marino e Índia");
		a3.setvalorQuestao(400);
		a3.setAlternativaCorreta("a");

		// INSERCAO DE VALORES PARA PARA O OBJETO DA QUARTA QUESTAO: QUESTAO, ALTERNATIVAS, ALTERNATIVA CORRETA E VALOR DA QUESTAO 
		Pergunta a4 = new Pergunta();
		a4.setQuestao("4 - Qual o nome do presidente do Brasil que ficou conhecido como Jango?");
		a4.setAlternativa("a) Jânio Quadros");
		a4.setAlternativa("b) Jacinto Anjos");
		a4.setAlternativa("c) João Goulart");//certa
		a4.setAlternativa("d) João Figueiredo");
		a4.setAlternativa("e) Getúlio Vargas");
		a4.setvalorQuestao(400);
		a4.setAlternativaCorreta("c");

		// INSERCAO DE VALORES PARA PARA O OBJETO DA QUINTA QUESTAO: QUESTAO, ALTERNATIVAS, ALTERNATIVA CORRETA E VALOR DA QUESTAO 
		Pergunta a5 = new Pergunta();
		a5.setQuestao("5 - Qual o grupo em que todas as palavras foram escritas corretamente?");
		a5.setAlternativa("a) Asterístico, beneficiente, meteorologia, entertido");//certa
		a5.setAlternativa("b) Asterisco, beneficente, meteorologia, entretido");
		a5.setAlternativa("c) Asterisco, beneficente, metereologia, entretido");
		a5.setAlternativa("d) Asterístico, beneficiente, metereologia, entretido");
		a5.setAlternativa("e) Asterisco, beneficiente, metereologia, entretido");
		a5.setvalorQuestao(500);
		a5.setAlternativaCorreta("a");

		// CRIACAO E ATRIBUICAO DO ARRAYLIST
        List<Pergunta> questoes = new ArrayList<>();
    	questoes.add(a1);   
    	questoes.add(a2); 
    	questoes.add(a3); 
    	questoes.add(a4); 
    	questoes.add(a5); 
                
		quiz.setPerguntas(questoes);
		
		//classe logicaQuiz
		LogicaQuiz logica = new LogicaQuiz();
		
		
		do {
			System.out.println("###################");
			System.out.println("     BEM VINDO     ");
			System.out.println("        AO         ");
			System.out.println("       QUIZ        ");
			System.out.println("###################");
			
            System.out.println("\n|1 - Alterar Perguntas | 2 - Jogar | 3 - Sair|");
            respMenu = scanner.nextInt();
                switch(respMenu) {
				case 1:
					
					scanner.nextLine(); // LIMPAR BUFFER
					// CODIGO DE ALTERAR PERGUNTAS
					System.out.println("#### ALTERAR QUESTÕES ####");
                                            
					System.out.println( a1.getQuestao()+"\n"+
										a2.getQuestao()+"\n"+
										a3.getQuestao()+"\n"+
										a4.getQuestao()+"\n"+
										a5.getQuestao());
						
					System.out.println("Qual pergunta deseja alterar:");
					opalt_que = scanner.nextInt();
					switch(opalt_que) {
						case 1:
							scanner.nextLine(); // LIMPAR BUFFER
							a1.Remove(opalt_que);
							
							System.out.println("#### ALTERAR QUESTÃO 1 ####");
							System.out.println("Digite a nova questão: ");
							alt_que = scanner.nextLine();
							a1.setQuestao(alt_que);
							
							System.out.println("Insira qual o valor da questao: ");
							alt_val = scanner.nextInt();
							a1.setvalorQuestao(alt_val);
							
							scanner.nextLine();
							for(int i=0; i<5;i++) {
								System.out.println("Insira as alternativas: ");
								alt_alt = scanner.nextLine();
								a1.setAlternativa(alt_alt);
							}
							
							System.out.println("Insira qual a alternativa correta (somente a opcao): ");
							alt_cor = scanner.nextLine();
							a1.setAlternativaCorreta(alt_cor);
							
							questoes.add(a1);   
					    	
							a1.Alterada();
							break;
							
						case 2:
							scanner.nextLine(); // LIMPAR BUFFER
							a2.Remove(opalt_que);
							
							System.out.println("#### ALTERAR QUESTÃO 2 ####");
							System.out.println("Digite a nova questão: ");
							alt_que = scanner.nextLine();
							a2.setQuestao(alt_que);

							System.out.println("Insira qual o valor da questao: ");
							alt_val = scanner.nextInt();
							a2.setvalorQuestao(alt_val);
							
							scanner.nextLine();
							for(int i=0; i<5;i++) {
								System.out.println("Insira as alternativas: ");
								alt_alt = scanner.nextLine();
								a2.setAlternativa(alt_alt);
							}

							System.out.println("Insira qual a alternativa correta (somente a opcao): ");
							alt_cor = scanner.nextLine();
							a2.setAlternativaCorreta(alt_cor);
							
							questoes.add(a2); 
					    	
							a1.Alterada();
							break;
							
						case 3:
							scanner.nextLine(); // LIMPAR BUFFER
							a3.Remove(opalt_que);
							
							System.out.println("#### ALTERAR QUESTÃO 3 ####");
							System.out.println("Digite a nova questão: ");
							alt_que = scanner.nextLine();
							a3.setQuestao(alt_que);

							System.out.println("Insira qual o valor da questao: ");
							alt_val = scanner.nextInt();
							a3.setvalorQuestao(alt_val);
							
							scanner.nextLine();
							for(int i=0; i<5;i++) {
								System.out.println("Insira as alternativas: ");
								alt_alt = scanner.nextLine();
								a3.setAlternativa(alt_alt);
							}

							System.out.println("Insira qual a alternativa correta (somente a opcao): ");
							alt_cor = scanner.nextLine();
							a3.setAlternativaCorreta(alt_cor);
							
							questoes.add(a3); 
					    	
							a1.Alterada();
							break;
							
						case 4:
							scanner.nextLine(); // LIMPAR BUFFER
							a4.Remove(opalt_que);
							
							System.out.println("#### ALTERAR QUESTÃO 4 ####");
							System.out.println("Digite a nova questão: ");
							alt_que = scanner.nextLine();
							a4.setQuestao(alt_que);

							System.out.println("Insira qual o valor da questao: ");
							alt_val = scanner.nextInt();
							a4.setvalorQuestao(alt_val);
							
							scanner.nextLine();
							for(int i=0; i<5;i++) {
								System.out.println("Insira as alternativas: ");
								alt_alt = scanner.nextLine();
								a4.setAlternativa(alt_alt);
							}

							System.out.println("Insira qual a alternativa correta (somente a opcao): ");
							alt_cor = scanner.nextLine();
							a4.setAlternativaCorreta(alt_cor);
							
							questoes.add(a4); 
					    	
							a1.Alterada();
							break;
							
						case 5:
							scanner.nextLine(); // LIMPAR BUFFER
							a5.Remove(opalt_que);
							
							System.out.println("#### ALTERAR QUESTÃO 5 ####");
							System.out.println("Digite a nova questão: ");
							alt_que = scanner.nextLine();
							a5.setQuestao(alt_que);

							System.out.println("Insira qual o valor da questao: ");
							alt_val = scanner.nextInt();
							a5.setvalorQuestao(alt_val);
							
							scanner.nextLine();
							for(int i=0; i<5;i++) {
								System.out.println("Insira as alternativas: ");
								alt_alt = scanner.nextLine();
								a5.setAlternativa(alt_alt);
							}

							System.out.println("Insira qual a alternativa correta (somente a opcao): ");
							alt_cor = scanner.nextLine();
							a5.setAlternativaCorreta(alt_cor);
							
							questoes.add(a5); 
			               
							a1.Alterada();
							break;
					}
					quiz.setPerguntas(questoes);
					break;
				case 2:
					// CODIO DE JOGAR
					quiz.questao();
					//logica.Imprime();
					break;
				case 3:
					logica.Imprime();
					System.exit(0);
					break;
				default:
					System.out.println("Opcao invalida! Tente novamente.");
                }
		}while(respMenu!=3);
	}

}
