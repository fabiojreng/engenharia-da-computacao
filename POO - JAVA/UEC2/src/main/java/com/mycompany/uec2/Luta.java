package com.mycompany.uec2;

import java.util.Random;

public class Luta {
    //Atributos
    private Lutador desafiado;
    private Lutador desafiante;
    private boolean aprovada;
    
    //Métodos
    public void marcarLuta(Lutador l1, Lutador l2){
      if(l1.getCategoria().equals(l2.getCategoria()) && l1!= l2){
          this.aprovada = true;
          this.desafiado = l1;
          this.desafiante = l2;
      }else{
          this.aprovada = false;
          this.desafiado = null;
          this.desafiante = null;
      }   
    }
    
    public void lutar(){
        if(this.aprovada){
            System.out.println("###DESAFIADO###");
            this.desafiado.apresentar();
            System.out.println("###DESAFIANTE###");
            this.desafiante.apresentar();
            
            Random aleatorio = new Random();
                int vencedor = aleatorio.nextInt(3);
            System.out.println("========Resultado:========");
            switch(vencedor){
                case 0: {
                    //Empate
                    System.out.println("Empate");
                    this.desafiado.empatarLuta();
                    this.desafiante.empatarLuta();
                        break;
                }
                case 1: {
                    //Desafiante vence
                    System.out.println("Vencedor: " + this.desafiante.getNome());
                    this.desafiante.ganharLuta();
                    this.desafiante.perderLuta();
                        break;
                }
                case 2: {
                    //Desafiado vence
                    System.out.println("Vencedor: " + this.desafiado.getNome());
                    this.desafiante.ganharLuta();
                    this.desafiado.perderLuta();
                        break;
                }
            }
            System.out.println("====================");
        }else{
            System.out.println("Não é possível lutar");
        }
    }

    public Lutador getDesafiado() {
        return desafiado;
    }

    public void setDesafiado(Lutador desafiado) {
        this.desafiado = desafiado;
    }

    public Lutador getDesafiante() {
        return desafiante;
    }

    public void setDesafiante(Lutador desafiante) {
        this.desafiante = desafiante;
    }
    
    
    
}
