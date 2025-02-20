#include "mpro.hpp"

class SementeImpl : public Semente {
public:
    void cadastrar() override {
        std::cout << "Semente cadastrada com sucesso!" << std::endl;
    }

    void consultar() override {
        std::cout << "Consultando semente..." << std::endl;
    }

    void atualizar() override {
        std::cout << "Semente atualizada com sucesso!" << std::endl;
    }

    void excluir() override {
        std::cout << "Semente excluída com sucesso!" << std::endl;
    }
};