#include <iostream>

int main(){
    int numMissoes;
    int experienciaTotal = 0;
    int experienciaPorMissao;
    int nivelAtual = 0;
    int experienciaRestante;

    std::cout << "Quantas missões foram completadas?";
    std::cin >> numMissoes;
    
    for (int i = 1;i <= numMissoes; +i){
        std::cout << "Insira a quantidade de experiência ganha na missão" << i <<": ";
        std::cin >> experienciaPorMissao;
        experienciaTotal += experienciaPorMissao;

        nivelAtual = experienciaTotal / 1000;
        experienciaRestante = 1000 - (experienciaTotal % 1000);

        std::cout << "Nivel atual:" << nivelAtual <<std::endl;
        std::cout << "Experiencia restate para o proximo nivel:"
                  << (experienciaRestante == 1000 ? 0 : experienciaRestante) << std::endl;

    }

     return 0;
}
