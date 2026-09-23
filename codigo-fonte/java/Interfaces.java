// Em Java, Interfaces são muito mais fortes que em C++
interface Calculavel {
    double calcularArea(); // Todo método em interface é public e abstract por padrão
}

interface Desenhavel {
    void desenhar();
}

// Uma classe pode implementar MÚLTIPLAS interfaces em Java!
class Retangulo implements Calculavel, Desenhavel {
    double base, altura;
    
    Retangulo(double b, double h) {
        this.base = b;
        this.altura = h;
    }
    
    @Override
    public double calcularArea() {
        return base * altura;
    }
    
    @Override
    public void desenhar() {
        System.out.println("Desenhando um retangulo na tela...");
    }
}

public class Interfaces {
    public static void main(String[] args) {
        Retangulo r = new Retangulo(5, 10);
        r.desenhar();
        System.out.println("Area: " + r.calcularArea());
    }
}