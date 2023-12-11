package ifma.sin.pessoas.entidades;

/**
 *
 * @author Fábio Júnior
 */
public class Trabalhador extends Pessoa{
    private double dinheiro;
    
    @Override
    public void dados(){
        System.out.println("##### Dados Trabalhador: ####");
        System.out.println("Nome: " + getNome());
        System.out.println("CPF: " + getCpf());
        System.out.println("Idade: " + getIdade());
        System.out.println("Dinheiro: " + getDinheiro());
    }
    public void trabalha(){
        System.out.println("Trabalhando...");
    }
    
    public void fazerCompras(){
        System.out.println("Fazendo Compras...");
    }

    public double getDinheiro() {
        return dinheiro;
    }

    public void setDinheiro(double dinheiro) {
        this.dinheiro = dinheiro;
    }
    
}
