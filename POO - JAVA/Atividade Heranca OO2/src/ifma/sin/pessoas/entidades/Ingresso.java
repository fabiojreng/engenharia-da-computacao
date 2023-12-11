package ifma.sin.pessoas.entidades;

/**
 *
 * @author Fábio Júnior
 */
public class Ingresso {
    private float valor;
    
    public void imprimeValor(){
        System.out.println("---------Valor Ingresso -----------" + "\n" + getValor());
    }

    public float getValor() {
        return valor;
    }

    public void setValor(float valor) {
        this.valor = valor;
    }
    
    
}
