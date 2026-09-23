#include <iostream>
using namespace std;

class Livro {
private:
    string titulo;
public:
    // Construtor
    Livro(string t) {
        titulo = t;
        cout << "Construtor: O livro '" << titulo << "' foi criado." << endl;
    }

    // Destrutor
    ~Livro() {
        cout << "Destrutor: O livro '" << titulo << "' foi destruido." << endl;
    }

    void exibir() {
        cout << "Titulo: " << titulo << endl;
    }
};

int main() {
    cout << "--- Inicio do programa ---" << endl;
    
    {
        Livro l1("O Senhor dos Aneis");
        l1.exibir();
        cout << "--- Fim do bloco interno ---" << endl;
    } // O destrutor de l1 é chamado aqui automaticamente

    cout << "--- Fim do programa ---" << endl;
    return 0;
}