package Polimorfismo;

/**
 *
 * @author Fábio Júnior
 */
public class Principal {

    public static void main(String[] args) {
        Estudante e = new Estudante();
        Professor p = new Professor();
        AtletaEscolar ae = new AtletaEscolar();
     
     
     e.setNome("Fabio");
     e.setIdade(20);
     e.setSexo("Masculino");
     e.setNumMatricula(89542);
    
     p.setNome("Joao");
     p.setIdade(40);
     p.setSexo("Masculino");
     p.setMateria("Programacao");

       
     e.dados();
     e.estudar();
     e.ler();
     e.horaAcordar("07h");
     
     p.dados();
     p.horaAcordar("06h");
     p.estudar();
     p.aplicarProva(false);
    }
    
}
