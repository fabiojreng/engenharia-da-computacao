package ifma.sin.banco.entidades;

/**
 *
 * @author Fábio Júnior
 */
public class Assistente extends Funcionario{
    private String matricula;
    
    @Override
    public void exibeDados(){
        System.out.println("Dados: ");
        System.out.println("Nome: " + getNome());
        System.out.println("CPF: " + getCpf());
        System.out.println("RG: " + getRg());
        System.out.println("Matricula: " + getMatricula());
    }
       
    public String getMatricula() {
        return matricula;
    }
 
}
