#pragma once

#include <iostream>
#include <vector>
#include <string>

class MPro;
class Funcionario;
class Maquina;
class Semente;
class Adubo;
class CategoriaMaquina;
class CategoriaAdubo;
class Monitor;
class Relatorio;

enum TipoOperacao { CRIAR, CONSULTAR, ATUALIZAR, EXCLUIR };

class Funcionario {
public:
    virtual void cadastrar() = 0;
    virtual void consultar() = 0;
    virtual void atualizar() = 0;
    virtual void excluir() = 0;
};

class Maquina {
public:
    virtual void cadastrar() = 0;
    virtual void consultar() = 0;
    virtual void atualizar() = 0;
    virtual void excluir() = 0;
};

class Semente {
public:
    virtual void cadastrar() = 0;
    virtual void consultar() = 0;
    virtual void atualizar() = 0;
    virtual void excluir() = 0;
};

class Adubo {
public:
    virtual void cadastrar() = 0;
    virtual void consultar() = 0;
    virtual void atualizar() = 0;
    virtual void excluir() = 0;
};

class CategoriaMaquina {
public:
    virtual void cadastrar() = 0;
    virtual void consultar() = 0;
    virtual void atualizar() = 0;
    virtual void excluir() = 0;
};

class CategoriaAdubo {
public:
    virtual void cadastrar() = 0;
    virtual void consultar() = 0;
    virtual void atualizar() = 0;
    virtual void excluir() = 0;
};

class Monitor {
public:
    virtual void monitorarOperacao() = 0;
    virtual void verificarNivelSementes() = 0;
    virtual void verificarVazaoSementes() = 0;
};

class Relatorio {
public:
    virtual void gerarRelatorio() = 0;
    virtual void salvarRelatorio() = 0;
};

class MPro {
public:
    virtual void definaFuncionario(Funcionario*) = 0;
    virtual Funcionario* obtenhaFuncionario() = 0;

    virtual void definaMaquina(Maquina*) = 0;
    virtual Maquina* obtenhaMaquina() = 0;

    virtual void definaSemente(Semente*) = 0;
    virtual Semente* obtenhaSemente() = 0;

    virtual void definaAdubo(Adubo*) = 0;
    virtual Adubo* obtenhaAdubo() = 0;

    virtual void definaCategoriaMaquina(CategoriaMaquina*) = 0;
    virtual CategoriaMaquina* obtenhaCategoriaMaquina() = 0;

    virtual void definaCategoriaAdubo(CategoriaAdubo*) = 0;
    virtual CategoriaAdubo* obtenhaCategoriaAdubo() = 0;

    virtual void definaMonitor(Monitor*) = 0;
    virtual Monitor* obtenhaMonitor() = 0;

    virtual void definaRelatorio(Relatorio*) = 0;
    virtual Relatorio* obtenhaRelatorio() = 0;
};