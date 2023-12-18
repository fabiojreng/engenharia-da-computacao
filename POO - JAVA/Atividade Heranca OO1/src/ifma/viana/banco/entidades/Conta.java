package ifma.viana.banco.entidades;

import ifma.sin.banco.entidades.Cliente;

/**
 *
 * @author Fábio Júnior
 */
public class Conta {
   private Cliente titular;
   private int numConta;
   private double saldo;
   
   public void saca(double valor){
       saldo -= valor;
   }
   
   public void deposita(double valor){
       saldo += valor;
   }
   
   public void transfere(Conta c, double valor){
       saldo -= valor;
       c.saldo += valor; 
   }

    public Cliente getTitular() {
        return titular;
    }

    public void setTitular(Cliente titular) {
        this.titular = titular;
    }

    public int getNumConta() {
        return numConta;
    }

    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

}
