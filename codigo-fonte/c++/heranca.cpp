#include <iostream>
using namespace std;

// Classe Base (Superclasse)
class Animal {
public:
    string nome;
    
    void comer() {
        cout << nome << " está comendo." << endl;
    }
};

// Classe Derivada (Subclasse) - Herda de Animal
class Cachorro : public Animal {
public:
    void latir() {
        cout << nome << " está latindo: Au au!" << endl;
    }
};

int main() {
    Cachorro meuCao;
    meuCao.nome = "Rex"; // Herdado de Animal
    
    meuCao.comer(); // Método herdado
    meuCao.latir(); // Método próprio de Cachorro

    return 0;
}