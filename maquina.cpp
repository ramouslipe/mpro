#include "mpro.hpp"

class MaquinaImpl : public Maquina {
public:
    void cadastrar() override {
        std::cout << "Máquina cadastrada com sucesso!" << std::endl;
    }

    void consultar() override {
        std::cout << "Consultando máquina..." << std::endl;
    }

    void atualizar() override {
        std::cout << "Máquina atualizada com sucesso!" << std::endl;
    }

    void excluir() override {
        std::cout << "Máquina excluída com sucesso!" << std::endl;
    }
};