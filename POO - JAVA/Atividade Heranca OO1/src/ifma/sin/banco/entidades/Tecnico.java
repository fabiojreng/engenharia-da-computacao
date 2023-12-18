package ifma.sin.banco.entidades;

/**
 *
 * @author Fábio Júnior
 */
public class Tecnico extends Assistente{
    private double salario;
       
    public void bonusSalarial(double valor){
        setSalario(getSalario() + valor);
        System.out.println("Salario: " + getSalario());
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }
    
}
