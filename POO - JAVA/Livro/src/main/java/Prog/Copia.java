package Prog;

public class Copia {

    public static void main(String[] args) {
   
        Pessoa[] p = new Pessoa[2];
        Livro [] l = new Livro[2];
        
        p[0] = new Pessoa("Fabio Junior", 19, "M");
        p[1] = new Pessoa("Maria", 18, "F");
        
        l[0] = new Livro("A Teoria da Relatvidade", "Albert Einstein", 191, p[0]);
        l[1] = new Livro("A Autobiografia de Nikola Tesla", "Nikola Tesla", 116, p[1]);
        
        l[0].abrir();
        l[0].folhear(68);
        l[0].avancarPag();
        
        p[0].fazerAniver();
        
        
        System.out.println(l[0].detalhes());
        System.out.println(l[1].detalhes());
        
        
    }
}
