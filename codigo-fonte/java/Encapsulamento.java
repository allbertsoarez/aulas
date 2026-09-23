class ContaBancaria {
    private double saldo; // Atributo privado

    public ContaBancaria() {
        this.saldo = 0.0;
    }

    public void depositar(double valor) {
        if (valor > 0) {
            this.saldo += valor;
            System.out.println("Deposito de R$ " + valor + " realizado.");
        } else {
            System.out.println("Valor invalido.");
        }
    }

    // Getter
    public double getSaldo() {
        return this.saldo;
    }
}

public class Encapsulamento {
    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria();
        conta.depositar(500.0);
        System.out.println("Saldo atual: R$ " + conta.getSaldo());
    }
}