package com.mycompany.projeto;

public class ControleRemoto implements Controlador{
   
    //Atributos
    private int volume;
    private boolean ligado;
    private boolean tocando;
    
    //Métodos Especiais
        //Construtor
    public ControleRemoto(){
        this.volume = 50;
        this.ligado = true;
        this.tocando = true;
    }

    public int getVolume() {
        return volume;
    }

    public void setVolume(int volume) {
        this.volume = volume;
    }

    public boolean getLigado() {
        return ligado;
    }

    public void setLigado(boolean ligado) {
        this.ligado = ligado;
    }

    public boolean getTocando() {
        return tocando;
    }

    public void setTocando(boolean tocando) {
        this.tocando = tocando;
    }
    
    //Métodos Abstratos
    @Override
    public void ligar() {
        this.setLigado(true);
        System.out.println("Ligando...");
    }

    @Override
    public void desligar() {
        this.setLigado(false);
        System.out.println("Desligando...");
    }

    @Override
    public void abirMenu() {
        if(this.getLigado()){
        System.out.println("-------Menu---------");
        System.out.println("Esta ligado? " + this.getLigado());  
        System.out.println("Esta tocando? " + this.getTocando());
        System.out.print("Volume: " + this.getVolume());
            for(int i = 0; i < this.getVolume(); i += 10){
                System.out.print("[]");
            }
        }else 
            System.out.println("Está desligado");
    }
    @Override
    public void fecharMenu() {
        if(this.getLigado()){
            System.out.println("Fechando menu...");
        }
    }

    @Override
    public void maisVolume() {
        if(this.getLigado() && this.getVolume() < 100){
            this.setVolume(this.getVolume() + 5);
        }else
            System.out.println("Impossível aumentar");
    }

    @Override
    public void menosVolume() {
        if(this.getLigado() == false && this.getVolume() != 0){
            this.setVolume(this.getVolume() - 5);
        }else
            System.out.println("Impossível diminuir");
    }

    @Override
    public void ligarMudo() {
       if(this.getLigado() && this.getVolume() != 0) {
           this.setVolume(0);
       }
    }

    @Override
    public void desligarMudo() {
        if(this.getLigado() && this.getVolume() == 0){
            this.setVolume(50); 
        }
    }   

    @Override
    public void play() {
        if(this.getLigado() && !(this.getTocando())){
            this.setTocando(true);
        }
    }

    @Override
    public void pause() {
        if(this.getLigado() && this.getTocando()){
            this.setTocando(false);
        }
    }
        
}
