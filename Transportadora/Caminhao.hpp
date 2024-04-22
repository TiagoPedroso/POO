#ifndef CAMINHAO_H
#define CAMINHAO_H
#include "includeAll.hpp"

class Caminhao : public Veiculo {
    private:

    public:
        Caminhao();
        Caminhao(string marca, string modelo, string placa, string chassi, Localizacao localizacao, int ano, int capacidadePeso, int capacidadeVol, int quilometragem, bool disponivel);
        Caminhao(string marca, string modelo, string placa, string chassi, double locLati, double locLong, int ano, int capacidadePeso, int capacidadeVol, int quilometragem, bool disponivel);
};

#endif