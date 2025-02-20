#include "mpro.hpp"

class CategoriaMaquinaImpl : public CategoriaMaquina {
public:
    void cadastrar() override {
        std::cout << "Categoria de máquina cadastrada com sucesso!" << std::endl;
    }

    void consultar() override {
        std::cout << "Consultando categoria de máquina..." << std::endl;
    }

    void atualizar() override {
        std::cout << "Categoria de máquina atualizada com sucesso!" << std::endl;
    }

    void excluir() override {
        std::cout << "Categoria de máquina excluída com sucesso!" << std::endl;
    }
};
