#include "mpro.hpp"

class CategoriaAduboImpl : public CategoriaAdubo {
public:
    void cadastrar() override {
        std::cout << "Categoria de adubo cadastrada com sucesso!" << std::endl;
    }

    void consultar() override {
        std::cout << "Consultando categoria de adubo..." << std::endl;
    }

    void atualizar() override {
        std::cout << "Categoria de adubo atualizada com sucesso!" << std::endl;
    }

    void excluir() override {
        std::cout << "Categoria de adubo excluída com sucesso!" << std::endl;
    }
};