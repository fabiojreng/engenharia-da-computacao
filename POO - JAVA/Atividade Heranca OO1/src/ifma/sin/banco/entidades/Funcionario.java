package ifma.sin.banco.entidades;

import ifma.viana.banco.entidades.Conta;

/**
 *
 * @author Fábio Júnior
 */
public class Funcionario extends Conta{
    private String nome;
    private String rg;
    private int cpf;
    
    public void exibeDados(){
        System.out.println("Dados: ");
        System.out.println("Nome: " + getNome());
        System.out.println("CPF: " + getCpf());
        System.out.println("RG: " + getRg());
    }

    public void aumento(){
       double aumento = (getSaldo() * 0.1);
       setSaldo(getSaldo() + aumento);
    }
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public int getCpf() {
        return cpf;
    }

    public void setCpf(int cpf) {
        this.cpf = cpf;
    }
    
}
