package ifma.sin.banco.entidades;

/**
 *
 * @author Fábio Júnior
 */
public class Gerente extends Funcionario{
    private int nivelGerencia;

    @Override
    public void exibeDados(){
        System.out.println("Dados: ");
        System.out.println("Nome: " + getNome());
        System.out.println("CPF: " + getCpf());
        System.out.println("RG: " + getRg());
        System.out.println("Nivel Gerencia: " + getNivelGerencia());
    }
    
    @Override
    public void aumento(){
        double aumento = (getSaldo() * 0.15);
        setSaldo(getSaldo() + aumento);
    }
    
    public int getNivelGerencia() {
        return nivelGerencia;
    }

    public void setNivelGerencia(int nivelGerencia) {
        this.nivelGerencia = nivelGerencia;
    }
     
}
