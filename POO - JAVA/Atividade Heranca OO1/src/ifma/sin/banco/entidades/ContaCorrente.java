package ifma.sin.banco.entidades;

import ifma.viana.banco.entidades.Conta;

/**
 *
 * @author Fábio Júnior
 */
public class ContaCorrente extends Conta{
   private double limite = 100;
  
   @Override
   public void saca(double valor){
       System.out.println("Valor do Saque: " + valor);
       if(getSaldo() >= 0 && getSaldo() >= valor){
           setSaldo(getSaldo() - valor - 0.2);
           if(getSaldo() <= 0 && limite > 0){
                setLimite(getLimite() + getSaldo());
                setSaldo(0);
           } 
       }else{
               System.out.println("Limite Indisponivel");
           }
   }
    
    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }
   
}
