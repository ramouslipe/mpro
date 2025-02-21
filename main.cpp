#include <iostream>
#include <string>

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

int main() {
    MonitorManager monitorManager;
    CategoriaAduboManager categoriaAduboManager;
    NivelSementesManager nivelSementesManager;
    VazaoSementesManager vazaoSementesManager;
    SolicitacaoReabastecimentoManager solicitacaoReabastecimentoManager;

    std::cout << "Testando operações do mPro:" << std::endl;

    monitorManager.solicitaStatus();

    monitorManager.registraObservacao("Observação de teste");

    monitorManager.retornaPainelMonitoramento();

    categoriaAduboManager.acessaModulo();

    nivelSementesManager.acessaModulo();

    solicitacaoReabastecimentoManager.registraSolicitacaoReabastecimento("Máquina 1");

    vazaoSementesManager.acessaModulo();

    std::cout << "Todas as operações foram testadas com sucesso!" << std::endl;

    return 0;
}