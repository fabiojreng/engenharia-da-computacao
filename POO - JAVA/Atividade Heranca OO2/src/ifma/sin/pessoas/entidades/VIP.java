package ifma.sin.pessoas.entidades;

/**
 *
 * @author Fábio Júnior
 */
public class VIP extends Ingresso{
    private float adicional;
    
    public float ingressoVip(float valor){
        return getAdicional() + valor;
    }

    public float getAdicional() {
        return adicional;
    }

    public void setAdicional(float adicional) {
        this.adicional = adicional;
    }
    
}
