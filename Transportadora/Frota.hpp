#ifndef FROTA_H
#define FROTA_H
#include "includeAll.hpp"

class Frota {
    private:
        list<Veiculo*> lista;

    public:
        list<Veiculo*> buscaLocalizacao(Localizacao localizacao);

        list<Veiculo*> obterVeiculosDisponiveis();

        int adicionaVeiculo(Veiculo *veiculo);

        int removeVeiculo(Veiculo *veiculo);

        Veiculo* buscaVeiculo(int id);

        Veiculo* buscaVeiculo(string placa);

        Frota();

        ~Frota();
};

#endif