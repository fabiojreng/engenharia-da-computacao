 package com.mycompany.uec2;

public class Lutador {
    //Atributos    
    private String nome;
    private String nascionalidade;
    private int idade;
    private float altura;
    private float peso;
    private String categoria;
    private int vitorias;
    private int derrotas;
    private int empates;
    
    //Métodos Públicos 
    public void apresentar(){
        System.out.println("Lutador: " + getNome());
        System.out.println("Nascionalidade: " + getNascionalidade());
        System.out.println("Idade: " + getIdade());
        System.out.println("Altura: " + getAltura());
        System.out.println("Peso: " + getPeso());
        System.out.println("Categoria: " + getCategoria());
        System.out.println("Vitorias: " + getVitorias());
        System.out.println("Derrotas: " + getDerrotas());
        System.out.println("Empates: " + getEmpates());  
    }
    public void status(){
        System.out.println("Nome: " + getNome());
        System.out.println("Idade: " + getIdade());
        System.out.println("Vitorias: " + getVitorias());
    }
    
    public void ganharLuta(){
        this.setVitorias(getVitorias() + 1);
    }
    
    public void perderLuta(){
        this.setDerrotas(getDerrotas() + 1);
    }
    
    public void empatarLuta(){
        this.setEmpates(getEmpates() + 1);
    }
    
    //Métodos Especiais
        //Construtor
    
    public Lutador(String nome, String nascionalidade, int idade, float altura, float peso, int vitorias, int derrotas, int empates){
        this.nome = nome;
        this.nascionalidade = nascionalidade;
        this.idade = idade;
        this.altura = altura;
        this.peso = peso;
        this.vitorias = vitorias;
        this.derrotas = derrotas;
        this.empates = empates;
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome){
        this.nome = nome;
    }
    
    public String getNascionalidade(){
        return nascionalidade;
    }
    public void setNascionalidade(String nascionalidade){
        this.nascionalidade = nascionalidade;
    }
    
    public int getIdade(){
        return idade;
    }
    public void setIdade(int idade){
        this.idade = idade;
    }

    public float getAltura() {
        return altura;
    }
    public void setAltura(float altura) {
        this.altura = altura;
    }

    public float getPeso() {
        return peso;
    }
    public void setPeso(float peso) {
        this.peso = peso;
        this.setCategoria();
    }
   
    public String getCategoria() {
        return categoria;
    }
    private void setCategoria() {
        if(this.peso < 53.2f){
            this.categoria = "Invalido";
        }else if(this.peso <= 70.3f){
            this.categoria = "Leve";
        }else if(this.peso <= 83.9f){
            this.categoria = "Medio";
        }else if(this.peso <= 120.2f){
            this.categoria = "Pesado";
        }else
            this.categoria = "Invalido";
    }

    public int getVitorias() {
        return vitorias;
    }
    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getDerrotas() {
        return derrotas;
    }
    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }

    public int getEmpates() {
        return empates;
    }
    public void setEmpates(int empates) {
        this.empates = empates;
    }
    
}
