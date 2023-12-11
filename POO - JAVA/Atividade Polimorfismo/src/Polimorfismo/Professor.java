package Polimorfismo;

/**
 *
 * @author Fábio Júnior
 */
public class Professor extends Pessoa implements Livro{
    private String materia;
    
    @Override
    public void dados(){
        System.out.println("#### Dados Professor: ####");
        System.out.println("Nome: " + this.getNome());
        System.out.println("Sexo: " + this.getSexo());
        System.out.println("Idade: " + this.getIdade());
        System.out.println("Materia: " + this.getMateria());
    }
    
    @Override
    public void horaAcordar(String horario){
        System.out.println("Horario Professor: " + horario);
    }
        
    public void aplicarProva(boolean prova){
        if(prova == true){
            System.out.println("Aplicando Prova");
        }else
            System.out.println("Nao Aplica");
    }
    
    @Override
    public void estudar(){
        System.out.println("Professor Estudando");
    }
    
    @Override
    public void ler(){
        System.out.println("Professor Lendo");
    }

    public String getMateria() {
        return materia;
    }

    public void setMateria(String materia) {
        this.materia = materia;
    }
    
}
