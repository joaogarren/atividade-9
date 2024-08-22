#include <iostream>

int main() {
    int pontosTotais = 100;
    int forca = 0, destreza = 0, inteligencia = 0;
    int pontosAlocar;

    std::cout << "Distribua os 100 pontos de habilidade entre os atributos Força, Destreza e Inteligência.\n";

    while (pontosTotais > 0) {
        std::cout << "Pontos restantes: " << pontosTotais << "\n";

        // Distribuir pontos em Força
        std::cout << "Quantos pontos deseja alocar para Força? ";
        std::cin >> pontosAlocar;
        if (pontosAlocar > pontosTotais) {
            std::cout << "Você não pode alocar mais pontos do que o disponível!\n";
            continue;
        }
        forca += pontosAlocar;
        pontosTotais -= pontosAlocar;

        if (pontosTotais == 0) break;

        // Distribuir pontos em Destreza
        std::cout << "Pontos restantes: " << pontosTotais << "\n";
        std::cout << "Quantos pontos deseja alocar para Destreza? ";
        std::cin >> pontosAlocar;
        if (pontosAlocar > pontosTotais) {
            std::cout << "Você não pode alocar mais pontos do que o disponível!\n";
            continue;
        }
        destreza += pontosAlocar;
        pontosTotais -= pontosAlocar;

        if (pontosTotais == 0) break;

        // Distribuir pontos em Inteligência
        std::cout << "Pontos restantes: " << pontosTotais << "\n";
        std::cout << "Quantos pontos deseja alocar para Inteligência? ";
        std::cin >> pontosAlocar;
        if (pontosAlocar > pontosTotais) {
            std::cout << "Você não pode alocar mais pontos do que o disponível!\n";
            continue;
        }
        inteligencia += pontosAlocar;
        pontosTotais -= pontosAlocar;
    }

    std::cout << "\nDistribuição final dos atributos:\n";
    std::cout << "Força: " << forca << "\n";
    std::cout << "Destreza: " << destreza << "\n";
    std::cout << "Inteligência: " << inteligencia << "\n";

    return 0;
}