/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Polimorfismo;

/**
 *
 * @author Fábio Júnior
 */
public class Estudante extends Pessoa implements Livro{
    private int numMatricula;
    
    @Override
    public void dados(){
        System.out.println("#### Dados Aluno: ####");
        System.out.println("Nome: " + this.getNome());
        System.out.println("Sexo: " + this.getSexo());
        System.out.println("Idade: " + this.getIdade());
        System.out.println("Numero da Matricula: " + this.getNumMatricula());
    }
    
    @Override
    public void horaAcordar(String horario){
        System.out.println("Horario Estudante: " + horario);
    }
    
    public void responderProva(){
        System.out.println("Respondendo Prova");
    }
    
    @Override
    public void estudar(){
        System.out.println("Aluno Estudando");
    }
    
    @Override
    public void ler(){
        System.out.println("Aluno Lendo");
    }

    public int getNumMatricula() {
        return numMatricula;
    }

    public void setNumMatricula(int numMatricula) {
        this.numMatricula = numMatricula;
    }
    
}
