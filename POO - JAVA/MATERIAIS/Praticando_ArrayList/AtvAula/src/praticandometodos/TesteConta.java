package praticandometodos;
import java.util.ArrayList;
import java.util.List;
import modelo.Conta;
/**
 *
 * @author Fábio Júnior
 */
/**
 * 
 * ATIVIDADE PARA OS ALUNOS IMPLEMENTAREM
 * 
 * Implementações a realizar na classe TestConta
 * 
 * 1. Criar um ArrayList para guardar todas as contas do banco
 * (Fazer a atividade seguindo o minitutorial de ArrayList Java 
 * disponível na atividade postada no Classroom)
 */
public class TesteConta {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Total de contas do banco: "+Conta.qtd_cliente);  
        Conta c1 = new Conta("Francisco", 12323, 450);
        c1.setAgencia(8642);
        /*
        if(c1.preencheCliente("Francisco",12323,450)){
            System.out.println("Cadastro realizado com sucesso.");
            c1.imprimeSaldo();
        } else{
          System.out.println("Erro ao cadastrar o cliente.");
        }
        */
        c1.imprimeSaldo();
    
        System.out.println("-----------------------------");
        
        Conta c2 = new Conta();
        c2.setTitular("Mariana Silva");
        c2.setNumero(676767);
        c2.setAgencia(8956);
        c2.setSaldo(200);
        c2.imprimeSaldo();
        
        System.out.println("-----------------------------");
        
        Conta c3 = new Conta();
        c3.setTitular("Joao");
        c3.setNumero(986545);
        c3.setAgencia(8974);
        c3.setGerente("Luis");
        c3.setSaldo(450);
        c3.imprimeSaldo();
       
        
        System.out.println("-----------------------------");
        
        
        // Fazer a implementação do minitutorial ArrayList nas linhas abaixo deste comentário
        List<Conta> listaContas = new ArrayList();
        
        Conta c4 = new Conta();
        c4.setTitular("Fabio Junior");
        c4.setNumero(123549);
        c4.setAgencia(6581);
        c4.setSaldo(500);
        
        Conta c5 = new Conta();
        c5.setTitular("Pedro");
        c5.setNumero(68845);
        c5.setAgencia(4568);
        c5.setSaldo(800);
        
        Conta c6 = new Conta();
        c6.setTitular("Alfredo");
        c6.setNumero(896452);
        c6.setAgencia(8674);
        c6.setSaldo(480);
        
        listaContas.add(c4);
        listaContas.add(c5);
        listaContas.add(c6);
        System.out.println("ArrayList");
        
        for(Conta c: listaContas){
            System.out.println("-----------------------------");
            c.imprimeSaldo();
        }
        System.out.println("Total de contas do banco: "+ Conta.qtd_cliente);
    }    
}

