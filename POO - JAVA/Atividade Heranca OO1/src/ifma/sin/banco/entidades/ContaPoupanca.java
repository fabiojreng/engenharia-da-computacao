package ifma.sin.banco.entidades;

import ifma.viana.banco.entidades.Conta;

/**
 *
 * @author Fábio Júnior
 */
public class ContaPoupanca extends Conta{
    private double rendimento;
        
    public void valorRendimento(){
        setSaldo(getSaldo() + getSaldo() * getRendimento());
    }
    
    public double getRendimento() {
        return rendimento;
    }

    public void setRendimento(double rendimento) {
        this.rendimento = rendimento;
    }
    
    
}
