#include "mpro.hpp"

class RelatorioImpl : public Relatorio {
public:
    void gerarRelatorio() override {
        std::cout << "Gerando relatório de plantio..." << std::endl;
    }

    void salvarRelatorio() override {
        std::cout << "Relatório salvo com sucesso!" << std::endl;
    }
};
