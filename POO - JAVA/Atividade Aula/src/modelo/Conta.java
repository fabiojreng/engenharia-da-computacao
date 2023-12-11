package modelo;

/**
 *
 * @author Fábio Júnior
 */

/**
 * ATIVIDADE PARA OS ALUNOS IMPLEMENTAREM
 * 
 * Implementações a realizar na classe Conta
 * 
 * 1. declarar os atributos:
 *  - agencia
 *  - gerente
 *  
 * 2. definir os métodos getts e setts para todos os atributos, 
 * exceto o atributo estático. Ver descrição desse tipo de método mais a baixo.
 * 
 * 2.1. Na classe TestaConta há exemplos de uso dos métodos getts e setts. 
 *      Com base nestes exemplos, faça você também o uso destes métodos para
 *      os demais atributos, exceto o atributo estático.
 * 
 * 3. criar um construtor para inicializar os atributos:
 * - gerente
 * - titular
 * - agencia
 * - numero
 * 
 */
public class Conta {
    // Definindo as características (atributos ou propriedades) da classe
    private String titular;
    private int numero;
    private double saldo;
    private double limite;
    private int agencia;
    private String gerente;
    
    // Características de um atributo estático:
    // 1. é um atributo da classe e não do objeto
    // 2. pode ser manipulado mesmo sem a criação de um objeto (diretamente pela classe)
    // 3. é um atributo compartilhado com todos os objetos da classe
    public static int qtd_cliente;
    
    // construtor padrão da classe
    // NÃO É NECESSÁRIO DECLARAR.
    // SOMENTE SE HOUVER OUTRO(S) CONSTRUTOR (ES) DEFINIDOS É QUE TORNA-SE
    // NECESSÁRIO DECLARAR O CONSTRUTOR SEM ARGUMENTOS.
    
    public Conta(){
        qtd_cliente++;
    }
    
    // defindo outro construtor da classe, diferente
    // construtor padrão
    
    public Conta(String titular, int numero, double saldo){
        this();
        this.titular = titular;
        this.numero = numero;
        this.saldo = saldo;
        calculaLimite();                
    }
        
    public Conta(String gerente, String titular, int agencia, int numero){
        this();
        this.gerente = gerente;
        //this.titular = titular;
        this.agencia = agencia;
        //this.numero = numero;
    }

    
    // Definindo os comportamentos da classe (métodos)
    // Definição da assinatura de um método:
    public boolean preencheCliente(String titular, int numero, double saldo){
        
        if (titular.isEmpty()){
            return false;
        }
        
        this.titular = titular;
        this.numero = numero;
        this.saldo = saldo;
        calculaLimite();
        
        return true;
    }
    
    public void imprimeSaldo(){
        System.out.println("titular = "+ titular);
        System.out.println("numero = "+numero);
        System.out.println("agencia = "+agencia);
        System.out.println("saldo = "+saldo);
        System.out.println("limite = "+limite);
    }
    
    private void calculaLimite(){
        // limite = saldo + 100;
        this.limite = saldo + (500 * 0.1);
    }
    
    public String getGerente() {
        return gerente;
    }

    public void setGerente(String gerente) {
        this.gerente = gerente;
    }
          

    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
        calculaLimite();
    }

    public double getLimite() {
        return limite;
    }

    private void setLimite(double limite) {
        this.limite = limite;
    }

    public int getAgencia() {
        return agencia;
    }

    public void setAgencia(int agencia) {
        this.agencia = agencia;
    }
   
    
}
