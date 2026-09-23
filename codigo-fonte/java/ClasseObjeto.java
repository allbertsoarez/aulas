class Pessoa {
    String nome;
    int idade;

    void apresentar() {
        System.out.println("Olá, meu nome é " + nome + " e eu tenho " + idade + " anos.");
    }
}

public class ClasseObjeto {
    public static void main(String[] args) {
        // Criando objetos (instanciando com a palavra 'new')
        Pessoa p1 = new Pessoa();
        p1.nome = "Ana Silva";
        p1.idade = 20;
        
        Pessoa p2 = new Pessoa();
        p2.nome = "Bruno Souza";
        p2.idade = 25;

        p1.apresentar();
        p2.apresentar();
    }
}