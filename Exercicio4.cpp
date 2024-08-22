#include <iostream>

int main() {
    const int numPersonagens = 5;
    int forca, destreza, inteligencia;
    int somaForca = 0, somaDestreza = 0, somaInteligencia = 0;

    for (int i = 1; i <= numPersonagens; ++i) {
        std::cout << "Personagem " << i << ":\n";
        
        std::cout << "Insira o valor de Força: ";
        std::cin >> forca;
        somaForca += forca;

        std::cout << "Insira o valor de Destreza: ";
        std::cin >> destreza;
        somaDestreza += destreza;

        std::cout << "Insira o valor de Inteligência: ";
        std::cin >> inteligencia;
        somaInteligencia += inteligencia;

        std::cout << std::endl;
    }

    // Calcular as médias
    double mediaForca = static_cast<double>(somaForca) / numPersonagens;
    double mediaDestreza = static_cast<double>(somaDestreza) / numPersonagens;
    double mediaInteligencia = static_cast<double>(somaInteligencia) / numPersonagens;

    // Exibir as médias
    std::cout << "Média de Força: " << mediaForca << "\n";
    std::cout << "Média de Destreza: " << mediaDestreza << "\n";
    std::cout << "Média de Inteligência: " << mediaInteligencia << "\n";

    return 0;
}