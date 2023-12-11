package ifma.sin.pessoas.entidades;

/**
 *
 * @author Fábio Júnior
 */
public class Pessoa {
    private String nome;
    private int cpf;
    private int idade;
    
    public void dados(){
        System.out.println("#### Dados: ####");
        System.out.println("Nome: " + getNome());
        System.out.println("CPF: " + getCpf());
        System.out.println("Idade: " + getIdade());
    }
    
    public Pessoa(){
    }
    
    public Pessoa(String nome) {
        this.nome = nome;   
    }
    
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getCpf() {
        return cpf;
    }

    public void setCpf(int cpf) {
        this.cpf = cpf;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }
    
    
}
