#include <iostream>
#include <string>
using namespace std;

// Definição da Classe
class Pessoa {
public:
    string nome;
    int idade;

    void apresentar() {
        cout << "Olá, meu nome é " << nome << " e eu tenho " << idade << " anos." << endl;
    }
};

int main() {
    // Criando objetos (instâncias) da classe
    Pessoa p1;
    p1.nome = "Ana Silva";
    p1.idade = 20;
    
    Pessoa p2;
    p2.nome = "Bruno Souza";
    p2.idade = 25;

    p1.apresentar();
    p2.apresentar();

    return 0;
}