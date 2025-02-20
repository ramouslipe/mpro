#include "mpro.hpp"

class MProImpl : public MPro {
    Funcionario* funcionario;
    Maquina* maquina;
    Semente* semente;
    Adubo* adubo;
    CategoriaMaquina* categoriaMaquina;
    CategoriaAdubo* categoriaAdubo;
    Monitor* monitor;
    Relatorio* relatorio;

public:
    void definaFuncionario(Funcionario* funcionario) override {
        this->funcionario = funcionario;
    }

    Funcionario* obtenhaFuncionario() override {
        return this->funcionario;
    }

    void definaMaquina(Maquina* maquina) override {
        this->maquina = maquina;
    }

    Maquina* obtenhaMaquina() override {
        return this->maquina;
    }

    void definaSemente(Semente* semente) override {
        this->semente = semente;
    }

    Semente* obtenhaSemente() override {
        return this->semente;
    }

    void definaAdubo(Adubo* adubo) override {
        this->adubo = adubo;
    }

    Adubo* obtenhaAdubo() override {
        return this->adubo;
    }

    void definaCategoriaMaquina(CategoriaMaquina* categoriaMaquina) override {
        this->categoriaMaquina = categoriaMaquina;
    }

    CategoriaMaquina* obtenhaCategoriaMaquina() override {
        return this->categoriaMaquina;
    }

    void definaCategoriaAdubo(CategoriaAdubo* categoriaAdubo) override {
        this->categoriaAdubo = categoriaAdubo;
    }

    CategoriaAdubo* obtenhaCategoriaAdubo() override {
        return this->categoriaAdubo;
    }

    void definaMonitor(Monitor* monitor) override {
        this->monitor = monitor;
    }

    Monitor* obtenhaMonitor() override {
        return this->monitor;
    }

    void definaRelatorio(Relatorio* relatorio) override {
        this->relatorio = relatorio;
    }

    Relatorio* obtenhaRelatorio() override {
        return this->relatorio;
    }
};