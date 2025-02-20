#include <iostream>
#include "mpro.hpp"

int main() {
    try {
        FuncionarioImpl funcionario;
        MaquinaImpl maquina;
        SementeImpl semente;
        AduboImpl adubo;
        CategoriaMaquinaImpl categoriaMaquina;
        CategoriaAduboImpl categoriaAdubo;
        MonitorImpl monitor;
        RelatorioImpl relatorio;

        MProImpl mpro;
        mpro.definaFuncionario(&funcionario);
        mpro.definaMaquina(&maquina);
        mpro.definaSemente(&semente);
        mpro.definaAdubo(&adubo);
        mpro.definaCategoriaMaquina(&categoriaMaquina);
        mpro.definaCategoriaAdubo(&categoriaAdubo);
        mpro.definaMonitor(&monitor);
        mpro.definaRelatorio(&relatorio);

        mpro.obtenhaFuncionario()->cadastrar();
        mpro.obtenhaMaquina()->consultar();
        mpro.obtenhaSemente()->atualizar();
        mpro.obtenhaAdubo()->excluir();
        mpro.obtenhaCategoriaMaquina()->cadastrar();
        mpro.obtenhaCategoriaAdubo()->consultar();
        mpro.obtenhaMonitor()->monitorarOperacao();
        mpro.obtenhaRelatorio()->gerarRelatorio();

        std::cout << "Todas as operações foram realizadas com sucesso!" << std::endl;
    } catch (const char* error) {
        std::cout << "ERRO: " << error << std::endl;
    }

    return 0;
}