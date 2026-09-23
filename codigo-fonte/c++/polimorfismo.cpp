#include <iostream>
using namespace std;

class FormaGeometrica {
public:
    // Função virtual pura (torna a classe abstrata)
    virtual void calcularArea() = 0;
    
    virtual void exibirMensagem() {
        cout << "Calculando area da forma..." << endl;
    }
};

class Retangulo : public FormaGeometrica {
private:
    double base, altura;
public:
    Retangulo(double b, double h) : base(b), altura(h) {}
    
    void calcularArea() override {
        cout << "Area do Retangulo: " << base * altura << endl;
    }
};

class Circulo : public FormaGeometrica {
private:
    double raio;
public:
    Circulo(double r) : raio(r) {}
    
    void calcularArea() override {
        cout << "Area do Circulo: " << 3.14159 * raio * raio << endl;
    }
};

int main() {
    // Polimorfismo: ponteiro da classe base apontando para objetos derivados
    FormaGeometrica* formas[2];
    formas[0] = new Retangulo(5.0, 10.0);
    formas[1] = new Circulo(3.0);

    for (int i = 0; i < 2; i++) {
        formas[i]->exibirMensagem();
        formas[i]->calcularArea(); // Chama o método da classe real do objeto
    }

    // Liberando memória
    delete formas[0];
    delete formas[1];

    return 0;
}