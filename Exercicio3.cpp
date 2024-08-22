#include <iostream>

int main() {
    int numAtaques;
    double danoBase, multiplicadorCritico;
    double danoTotal = 0;

    std::cout << "Quantos ataques foram realizados? ";
    std::cin >> numAtaques;

    for (int i = 1; i <= numAtaques; ++i) {
        std::cout << "Insira o dano base para o ataque " << i << ": ";
        std::cin >> danoBase;

        std::cout << "Insira o multiplicador de crítico para o ataque " << i 
                  << " (entre 0.0 e 2.0): ";
        std::cin >> multiplicadorCritico;

        // Validar o multiplicador de crítico
        if (multiplicadorCritico < 0.0 || multiplicadorCritico > 2.0) {
            std::cout << "Multiplicador de crítico inválido! Tente novamente.\n";
            --i; // Volta ao mesmo ataque para corrigir a entrada
            continue;
        }

        danoTotal += danoBase * multiplicadorCritico;
    }

    std::cout << "Dano total causado pelo personagem: " << danoTotal << "\n";

    return 0;
}