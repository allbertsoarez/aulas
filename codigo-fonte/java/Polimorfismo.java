abstract class FormaGeometrica {
    // Método abstrato (sem corpo)
    abstract void calcularArea();
    
    void exibirMensagem() {
        System.out.println("Calculando area...");
    }
}

class Retangulo extends FormaGeometrica {
    double base, altura;
    
    Retangulo(double b, double h) {
        this.base = b;
        this.altura = h;
    }
    
    @Override // Anotação para indicar sobrescrita
    void calcularArea() {
        System.out.println("Area do Retangulo: " + (base * altura));
    }
}

class Circulo extends FormaGeometrica {
    double raio;
    
    Circulo(double r) {
        this.raio = r;
    }
    
    @Override
    void calcularArea() {
        System.out.println("Area do Circulo: " + (3.14159 * raio * raio));
    }
}

public class Polimorfismo {
    public static void main(String[] args) {
        // Polimorfismo: variável da classe base apontando para objetos derivados
        FormaGeometrica[] formas = new FormaGeometrica[2];
        formas[0] = new Retangulo(5.0, 10.0);
        formas[1] = new Circulo(3.0);

        for (FormaGeometrica forma : formas) { // Loop for-each do Java
            forma.exibirMensagem();
            forma.calcularArea();
        }
    }
}