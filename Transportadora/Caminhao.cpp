#include "includeAll.hpp"

Caminhao::Caminhao() : Veiculo(){}

Caminhao::Caminhao(string marca, string modelo, string placa, string chassi, Localizacao localizacao, int ano, int capacidadePeso, int capacidadeVol, int quilometragem, bool disponivel)
: Veiculo::Veiculo("Caminhao", marca, modelo, placa, chassi, localizacao, ano, capacidadePeso, capacidadeVol, quilometragem, disponivel) {}

Caminhao::Caminhao(string marca, string modelo, string placa, string chassi, double locLati, double locLong, int ano, int capacidadePeso, int capacidadeVol, int quilometragem, bool disponivel)
: Veiculo::Veiculo("Caminhao", marca, modelo, placa, chassi, locLati, locLong, ano, capacidadePeso, capacidadeVol, quilometragem, disponivel) {}