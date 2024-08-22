#include <iostream>
#include <cstdlib> // Para usar a função rand()
#include <ctime> // Para usar a função time()

int main() {
    int forca, destreza, sorte;
    int somaAtributos;
    int numeroAleatorio;

    // Inicializar o gerador de números aleatórios com o tempo atual
    std::srand(std::time(0));

    std::cout << "Insira o valor de Força do personagem: ";
    std::cin >> forca;

    std::cout << "Insira o valor de Destreza do personagem: ";
    std::cin >> destreza;

    std::cout << "Insira o valor de Sorte do personagem: ";
    std::cin >> sorte;

    // Calcular a soma de Força e Destreza
    somaAtributos = forca + destreza;

    // Gerar um número aleatório entre 0 e 100
    numeroAleatorio = std::rand() % 101;

    std::cout << "\nNúmero aleatório gerado: " << numeroAleatorio << std::endl;

    // Verificar as condições de sucesso
    if (somaAtributos > 50 && sorte > numeroAleatorio) {
        std::cout << "Missão bem-sucedida!" << std::endl;
    } else {
        std::cout << "Missão fracassada!" << std::endl;
    }

    return 0;
    
}