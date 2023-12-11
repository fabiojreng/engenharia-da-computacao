package Prog;

public class Livro implements Publicacao{
   private String titulo;
   private String autor;
   private int totPaginas;
   private int pagAtual;
   private boolean aberto;
   private Pessoa leitor;
   
   public String detalhes(){
       System.out.println("#########################");
       return "Título: " + this.titulo +
               "\nAutor: " + this.autor +
               "\nTotal de Páginas: " + this.totPaginas +
               "\nPágina Atual: " + this.pagAtual +
               "\nAberto: " + this.aberto + 
               "\nLeitor: " + this.leitor.getNome() + 
               "    Idade: " + this.leitor.getIdade();   
   }

    public Livro(String titulo, String autor, int totPaginas, Pessoa leitor) {
        this.titulo = titulo;
        this.autor = autor;
        this.totPaginas = totPaginas;
        this.pagAtual = 0;
        this.aberto = false;
        this.leitor = leitor;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public int getTotPaginas() {
        return totPaginas;
    }

    public void setTotPaginas(int totPaginas) {
        this.totPaginas = totPaginas;
    }

    public int getPagAtual() {
        return pagAtual;
    }

    public void setPagAtual(int pagAtual) {
        this.pagAtual = pagAtual;
    }

    public boolean getAberto() {
        return aberto;
    }

    public void setAberto(boolean aberto) {
        this.aberto = aberto;
    }

    public Pessoa getLeitor() {
        return leitor;
    }

    public void setLeitor(Pessoa leitor) {
        this.leitor = leitor;
    }

    @Override
    public void abrir() {
       this.aberto = true;
    }

    @Override
    public void fechar() {
        this.aberto = false;
        this.pagAtual = 0;
    }

    @Override
    public void folhear(int p) {
        if(this.aberto = true && this.totPaginas > p)
            this.pagAtual = p;
    }
        

    @Override
    public void avancarPag() {
        if(this.aberto = true && this.pagAtual > this.totPaginas)
            this.setPagAtual(getPagAtual() + 1);
    }
    
    @Override
    public void voltarPag() {
        if(this.aberto && this.pagAtual > 0 )
            this.setPagAtual(getPagAtual() - 1);
    }
   
}
   

