#include "mpro.hpp"

class AduboImpl : public Adubo {
public:
    void cadastrar() override {
        std::cout << "Adubo cadastrado com sucesso!" << std::endl;
    }

    void consultar() override {
        std::cout << "Consultando adubo..." << std::endl;
    }

    void atualizar() override {
        std::cout << "Adubo atualizado com sucesso!" << std::endl;
    }

    void excluir() override {
        std::cout << "Adubo excluído com sucesso!" << std::endl;
    }
};