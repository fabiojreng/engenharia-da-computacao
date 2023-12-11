package com.mycompany.uec2;

/**
 *
 * @author Fábio Júnior
 */
public class UEC2 {

    public static void main(String[] args) {
       
       Lutador l[] = new Lutador[6];
        
       l[0] = new Lutador("Pretty Boy", "França", 31, 1.75f, 68.9f, 11, 2, 1);       
       l[1] = new Lutador("PutsScript", "Brasil", 29, 1.68f, 57.8f, 14, 2, 3) ;
       
       Luta UEC = new Luta();
       
       UEC.marcarLuta(l[0], l[1]);
       UEC.lutar();
       
       
    }
}
