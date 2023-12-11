package ifma.sin.banco.teste;

import ifma.sin.banco.entidades.Cliente;
import ifma.sin.banco.entidades.ContaCorrente;
import ifma.sin.banco.entidades.ContaPoupanca;

/**
 *
 * @author Fábio Júnior
 */
public class TesteContas {

    public static void main(String[] args) {
        Cliente c = new Cliente();
        ContaCorrente cc = new ContaCorrente();
        ContaPoupanca cp = new ContaPoupanca();
        
        
        cc.setSaldo(100);
        cc.deposita(50);
        System.out.println("Saldo Inicial: " + cc.getSaldo());
        cc.saca(150);
        
        System.out.println("Limite Final: " + cc.getLimite());
        System.out.println("Saldo Final: " + cc.getSaldo());
        
        cp.setSaldo(100);
        //cp.deposita(2000);
        cp.setRendimento(0.1);
        cp.valorRendimento();
        System.out.println("Saldo Conta Poupanca: " + cp.getSaldo());
        //cp.saca(2000);
        //System.out.println("Saldo Conta Poupanca: " + cp.getSaldo());

    }
    
}
