#include "mpro.hpp"

class FuncionarioImpl : public Funcionario {
public:
    void cadastrar() override {
        std::cout << "Funcionário cadastrado com sucesso!" << std::endl;
    }

    void consultar() override {
        std::cout << "Consultando funcionário..." << std::endl;
    }

    void atualizar() override {
        std::cout << "Funcionário atualizado com sucesso!" << std::endl;
    }

    void excluir() override {
        std::cout << "Funcionário excluído com sucesso!" << std::endl;
    }
};