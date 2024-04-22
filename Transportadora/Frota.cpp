#include "includeAll.hpp"

    list<Veiculo*> Frota::buscaLocalizacao(Localizacao localizacao) {

        list<Veiculo*> listaLocal;

        for(Veiculo* veiculo : this->lista) {
            if(veiculo->getLocalizacao() == localizacao)
                listaLocal.push_back(veiculo);
        }
        return listaLocal;
    }

    list<Veiculo*> Frota::obterVeiculosDisponiveis() {

        list<Veiculo*> listaLocal;

        for(Veiculo* veiculo : this->lista) {
            if(veiculo->isDisponivel())
                listaLocal.push_back(veiculo);
        }
        return listaLocal;
    }

    int Frota::adicionaVeiculo(Veiculo *veiculo) {
        this->lista.push_back(veiculo);
        return 1;
    }

    int Frota::removeVeiculo(Veiculo *veiculo) {
        this->lista.remove(veiculo);
        return 1;
    }

    Veiculo* Frota::buscaVeiculo(int id) {
        for(Veiculo* veiculo : this->lista) {
            if(veiculo->getId() == id)
                return veiculo;
        }
        return nullptr;
    }

    Veiculo* Frota::buscaVeiculo(string placa) {
        for(Veiculo* veiculo : this->lista) {
            if(veiculo->getPlaca() == placa)
                return veiculo;
        }
        return nullptr;
    }

    Frota::Frota() {

    }

    Frota::~Frota() {

    }