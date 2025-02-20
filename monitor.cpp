#include "mpro.hpp"

class MonitorImpl : public Monitor {
public:
    void monitorarOperacao() override {
        std::cout << "Monitorando operação da máquina..." << std::endl;
    }

    void verificarNivelSementes() override {
        std::cout << "Verificando nível de sementes..." << std::endl;
    }

    void verificarVazaoSementes() override {
        std::cout << "Verificando vazão de sementes..." << std::endl;
    }
};