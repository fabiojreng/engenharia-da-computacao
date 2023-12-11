package ifma.sin.pessoas.teste;

import ifma.sin.pessoas.entidades.Ingresso;
import ifma.sin.pessoas.entidades.Miseravel;
import ifma.sin.pessoas.entidades.Normal;
import ifma.sin.pessoas.entidades.Trabalhador;
import ifma.sin.pessoas.entidades.VIP;

/**
 *
 * @author Fábio Júnior
 */
public class Principal {

    public static void main(String[] args) {
        
        Trabalhador t = new Trabalhador();
        Miseravel m = new Miseravel();
        Ingresso i = new Ingresso();
        Normal ni = new Normal();
        VIP vi = new VIP();
        
        t.setNome("Fabio");
        t.setIdade(20);
        t.setCpf(2251);
        t.dados();
        t.setDinheiro(600);
        t.fazerCompras();
        
        m.setNome("Mendigo");
        m.setIdade(40);
        m.dados();
        m.mendigar();
        
        i.setValor(50);
        i.imprimeValor();
        
        ni.imprimeValor();
        vi.setAdicional(35);
        System.out.println("Valor VIP: " + vi.ingressoVip(i.getValor()));
       
    }
    
}
