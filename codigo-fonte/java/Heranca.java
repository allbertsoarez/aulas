class Animal {
    String nome;
    
    void comer() {
        System.out.println(nome + " está comendo.");
    }
}

// Em Java, usamos a palavra-chave 'extends' para herança
class Cachorro extends Animal {
    void latir() {
        System.out.println(nome + " está latindo: Au au!");
    }
}

public class Heranca {
    public static void main(String[] args) {
        Cachorro meuCao = new Cachorro();
        meuCao.nome = "Rex";
        
        meuCao.comer(); // Método herdado
        meuCao.latir(); // Método próprio
    }
}