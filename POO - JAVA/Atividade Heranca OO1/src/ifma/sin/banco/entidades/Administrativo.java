package ifma.sin.banco.entidades;

import java.util.Scanner;


/**
 *
 * @author Fábio Júnior
 */
public class Administrativo {
    private String turno;
    private double salario;

      
    public void bonusSalarial(double valor){
        Scanner sc = new Scanner(System.in);
        System.out.println("Qual turno trabalha? m - manha n - noite");
        turno = sc.nextLine();
        if("n".equals(turno)){
            setSalario(getSalario() + valor);
            System.out.println("Salario com Bonus: " + getSalario());
        }else
            System.out.println("Salario Normal: " + getSalario());
      }
    
    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }
      
}
