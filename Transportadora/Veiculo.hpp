#ifndef VEICULO_H
#define VEICULO_H
#include "includeAll.hpp"

class Veiculo {
    private:
        int id;
        static int proxId;
        string tipo;
        string marca;
        string modelo;
        string placa;
        string chassi;
        Localizacao localizacao;
        int ano;
        int capacidadePeso;
        int capacidadeVol;
        int quilometragem;
        bool disponivel;
        
        int criaId();

    public:
        int getId();

        string getTipo();
        int setTipo(string tipo);

        string getMarca();
        int setMarca(string marca);

        string getModelo();
        int setModelo(string modelo);

        string getPlaca();
        int setPlaca(string placa);

        string getChassi();
        int setChassi(string chassi);

        Localizacao getLocalizacao();
        int setLocalizacao(Localizacao localizacao);
        int setLocalizacao(double locLati, double locLong);

        int getAno();
        int setAno(int ano);

        int getCapacidadePeso();
        int setCapacidadePeso(int capacidadePeso);

        int getCapacidadeVol();
        int setCapacidadeVol(int capacidadeVol);

        int getQuilometragem();
        int setQuilometragem(int quilometragem);

        bool isDisponivel();
        int setDisponivel(bool disponivel);

        Veiculo();

        Veiculo(string tipo, string marca, string modelo, string placa, string chassi, Localizacao localizacao, int ano, int capacidadePeso, int capacidadeVol, int quilometragem, bool disponivel);
        Veiculo(string tipo, string marca, string modelo, string placa, string chassi, double locLati, double locLong, int ano, int capacidadePeso, int capacidadeVol, int quilometragem, bool disponivel);

        ~Veiculo();

        void infoVeiculo();

        bool operator == (Veiculo veiculo);
    
        friend ostream& operator<<(ostream& stream, Veiculo veiculo);
};


#endif