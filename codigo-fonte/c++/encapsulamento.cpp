#include <iostream>
using namespace std;

class ContaBancaria {
private: // Atributos privados (ocultos)
    double saldo;

public:
    // Construtor
    ContaBancaria() {
        saldo = 0.0;
    }

    // Método para depositar
    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Deposito de R$ " << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Valor invalido para deposito." << endl;
        }
    }

    // Getter para acessar o saldo
    double getSaldo() {
        return saldo;
    }
};

int main() {
    ContaBancaria minhaConta;
    
    // minhaConta.saldo = 1000; // ERRO: O atributo é privado!
    
    minhaConta.depositar(500.0);
    minhaConta.depositar(-100.0); // Tentativa inválida
    
    cout << "Saldo atual: R$ " << minhaConta.getSaldo() << endl;

    return 0;
}