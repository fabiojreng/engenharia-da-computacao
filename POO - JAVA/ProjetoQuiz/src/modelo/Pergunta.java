package modelo;
import java.util.ArrayList;
import java.util.List;

public class Pergunta extends Quiz{ // HERANCA DE QUIZ
	
	private String questao; // ATRIBUTO DA QUESTAO
	private List<String> alternativas; // ATRIBUTO DA LISTA DE ALTERNATIVAS
	private String alternativaCorreta; // ATRIBUTO DA ALTERNATIVA CORRETA
	private double valorQuestao; // ATRIBUTO DO VALOR DA QUESTAO

	// CONTRUTOR PERGUNTA
	public Pergunta(){
		this.alternativas = new ArrayList<String>();
    }
	
	// GET E SET DA LISTA DE ALTERNATIVAS
	public List<String> getAlternativas() {
		return alternativas;
	}
	public void setAlternativa(String alternativa) {
		this.alternativas.add(alternativa);
	}
	
	// GET E SET DE QUESTAO
	public String getQuestao() {
		return questao;
	}
	public void setQuestao(String questao) {
		this.questao = questao;
	}
	
	// GET E SET  DE ALTERNATIVA CORRETA
	public void setAlternativaCorreta(String alternativaCorreta) {
		this.alternativaCorreta = alternativaCorreta;
	}
	public String getAlternativaCorreta() {
		return alternativaCorreta;
	}
	
	// GET E SET VALOR DA QUESTAO
	public double getvalorQuestao() {
		return valorQuestao;
	}
	public void setvalorQuestao(double valorQuestao) {
		this.valorQuestao = valorQuestao;
	}
	
	// EXIBIR A QUESTAO
	public void Exibir() {
		System.out.println(questao);
	}
	
	// EXIBIR A QUESTAO ALTERADA
	public void Alterada() {
		System.out.println(questao);
		System.out.println(alternativas);
	}
	
	// REMOCAO DE ALTERNATIVAS
	public void Remove(int pod) {
		if(pod == 1) {
			alternativas.removeAll(alternativas);
		}else if(pod == 2) {
			alternativas.removeAll(alternativas);
		}else if(pod == 3) {
			alternativas.removeAll(alternativas);
		}else if(pod == 4) {
			alternativas.removeAll(alternativas);
		}else if(pod == 5) {
			alternativas.removeAll(alternativas);
		}
	}
}
