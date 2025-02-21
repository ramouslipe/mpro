#include <iostream>
#include <string>
#include <map>
#include <functional>

class MonitorDao {
public:
    void solicitaStatus() {
        std::cout << "MonitorDao: Status das máquinas solicitado." << std::endl;
    }

    void registraObservacao(const std::string& observacao) {
        std::cout << "MonitorDao: Observação registrada: " << observacao << std::endl;
    }

    void retornaPainelMonitoramento() {
        std::cout << "MonitorDao: Painel de monitoramento retornado." << std::endl;
    }
};

class CategoriaAduboDao {
public:
    void acessaModulo() {
        std::cout << "CategoriaAduboDao: Módulo de categorias de adubo acessado." << std::endl;
    }
};

class NivelSementesDao {
public:
    void acessaModulo() {
        std::cout << "NivelSementesDao: Módulo de nível de sementes acessado." << std::endl;
    }
};

class VazaoSementesDao {
public:
    void acessaModulo() {
        std::cout << "VazaoSementesDao: Módulo de vazão de sementes acessado." << std::endl;
    }
};

class SolicitacaoReabastecimentoDao {
public:
    void registraSolicitacaoReabastecimento(const std::string& maquina) {
        std::cout << "SolicitacaoReabastecimentoDao: Solicitação de reabastecimento registrada para " << maquina << "." << std::endl;
    }
};

class RelatorioPlantioDao {
public:
    void acessaModulo() {
        std::cout << "RelatorioPlantioDao: Módulo de relatórios de plantio acessado." << std::endl;
        std::cout << "Digite o período do relatório (ex: 01/2025 a 12/2025): ";
        std::string periodo;
        std::getline(std::cin, periodo);
        std::cout << "Relatório gerado para o período: " << periodo << std::endl;
    }
};

class MonitorManager {
private:
    MonitorDao monitorDao;

public:
    void solicitaStatus() {
        std::cout << "MonitorManager: Solicitando status das máquinas..." << std::endl;
        monitorDao.solicitaStatus();
    }

    void registraObservacao(const std::string& observacao) {
        std::cout << "MonitorManager: Registrando observação..." << std::endl;
        monitorDao.registraObservacao(observacao);
    }

    void retornaPainelMonitoramento() {
        std::cout << "MonitorManager: Retornando painel de monitoramento..." << std::endl;
        monitorDao.retornaPainelMonitoramento();
    }
};

class CategoriaAduboManager {
private:
    CategoriaAduboDao categoriaAduboDao;

public:
    void acessaModulo() {
        std::cout << "CategoriaAduboManager: Acessando módulo de categorias de adubo..." << std::endl;
        categoriaAduboDao.acessaModulo();
    }
};

class NivelSementesManager {
private:
    NivelSementesDao nivelSementesDao;

public:
    void acessaModulo() {
        std::cout << "NivelSementesManager: Acessando módulo de nível de sementes..." << std::endl;
        nivelSementesDao.acessaModulo();
    }
};

class VazaoSementesManager {
private:
    VazaoSementesDao vazaoSementesDao;

public:
    void acessaModulo() {
        std::cout << "VazaoSementesManager: Acessando módulo de vazão de sementes..." << std::endl;
        vazaoSementesDao.acessaModulo();
    }
};

class SolicitacaoReabastecimentoManager {
private:
    SolicitacaoReabastecimentoDao solicitacaoReabastecimentoDao;

public:
    void registraSolicitacaoReabastecimento(const std::string& maquina) {
        std::cout << "SolicitacaoReabastecimentoManager: Registrando solicitação de reabastecimento para " << maquina << "..." << std::endl;
        solicitacaoReabastecimentoDao.registraSolicitacaoReabastecimento(maquina);
    }
};

class RelatorioPlantioManager {
private:
    RelatorioPlantioDao relatorioPlantioDao;

public:
    void acessaModulo() {
        std::cout << "RelatorioPlantioManager: Acessando módulo de relatórios de plantio..." << std::endl;
        relatorioPlantioDao.acessaModulo();
    }
};

int main() {
    MonitorManager monitorManager;
    CategoriaAduboManager categoriaAduboManager;
    NivelSementesManager nivelSementesManager;
    VazaoSementesManager vazaoSementesManager;
    SolicitacaoReabastecimentoManager solicitacaoReabastecimentoManager;
    RelatorioPlantioManager relatorioPlantioManager;

    std::map<std::string, std::function<void()>> comandos = {
        {"solicitaStatus", [&]() { monitorManager.solicitaStatus(); }},
        {"registraObservacao", [&]() {
            std::string observacao;
            std::cout << "Digite a observação: ";
            std::getline(std::cin, observacao);
            monitorManager.registraObservacao(observacao);
        }},
        {"retornaPainelMonitoramento", [&]() { monitorManager.retornaPainelMonitoramento(); }},
        {"acessaModuloCategoriasAdubo", [&]() { categoriaAduboManager.acessaModulo(); }},
        {"acessaModuloNivelSementes", [&]() { nivelSementesManager.acessaModulo(); }},
        {"registraSolicitacaoReabastecimento", [&]() {
            std::string maquina;
            std::cout << "Digite o nome da máquina: ";
            std::getline(std::cin, maquina);
            solicitacaoReabastecimentoManager.registraSolicitacaoReabastecimento(maquina);
        }},
        {"acessaModuloVazaoSementes", [&]() { vazaoSementesManager.acessaModulo(); }},
        {"acessaModuloRelatoriosPlantio", [&]() { relatorioPlantioManager.acessaModulo(); }}
    };

    std::string comando;
    while (true) {
        std::cout << "\nDigite um comando (ou 'sair' para encerrar): ";
        std::getline(std::cin, comando);

        if (comando == "sair") {
            break;
        }

        if (comandos.find(comando) != comandos.end()) {
            comandos[comando]();
        } else {
            std::cout << "Comando inválido! Tente novamente." << std::endl;
        }
    }

    std::cout << "Programa encerrado." << std::endl;
    return 0;
}