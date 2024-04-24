#include "includeAll.hpp"

    int Veiculo::proxId = 1;

    int Veiculo::criaId() {
        this->id = proxId;
        proxId++;
        return 1;
    }

    int Veiculo::getId() {
        return this->id;
    }

    string Veiculo::getTipo() {return this->tipo;}

    int Veiculo::setTipo(string tipo) {
        this->tipo = tipo;
        return 1;
    }

    string Veiculo::getMarca() {return this->marca;}

    int Veiculo::setMarca(string marca) {
        this->marca = marca;
        return 1;
    }

    string Veiculo::getModelo() {return this->modelo;}

    int Veiculo::setModelo(string modelo) {
        this->modelo = modelo;
        return 1;
    }

    string Veiculo::getPlaca() {return this->placa;}

    int Veiculo::setPlaca(string placa) {
        this->placa = placa;
        return 1;
    }

    string Veiculo::getChassi() {return this->chassi;}

    int Veiculo::setChassi(string chassi) {
        this->chassi = chassi;
        return 1;
    }

    Localizacao Veiculo::getLocalizacao() {return this->localizacao;}

    int Veiculo::setLocalizacao(Localizacao localizacao) {
        this->localizacao = localizacao;
        return 1;
    }

    int Veiculo::setLocalizacao(double latitude, double longitude) {
        this->localizacao.setLatitude(latitude);
        this->localizacao.setLongitude(longitude);
        return 1;
    }

    int Veiculo::getAno() {return this->ano;}

    int Veiculo::setAno(int ano) {
        this->ano = ano;
        return 1;
    }

    int Veiculo::getCapacidadePeso() {return this->capacidadePeso;}

    int Veiculo::setCapacidadePeso(int capacidadePeso) {
        if(capacidadePeso<0) {
            this->capacidadePeso = 0;
            return 0;
        }
        this->capacidadePeso = capacidadePeso;
        return 1;
    }

    int Veiculo::getCapacidadeVol() {return this->capacidadeVol;}

    int Veiculo::setCapacidadeVol(int capacidadeVol) {
        if(capacidadeVol<0) {
            this->capacidadeVol = 0;
            return 0;
        }
        this->capacidadeVol = capacidadeVol;
        return 1;
    }

    int Veiculo::getQuilometragem() {return this->quilometragem;}

    int Veiculo::setQuilometragem(int quilometragem) {
        if(quilometragem<0) {
            this->quilometragem = 0;
            return 0;
        }
        this->quilometragem = quilometragem;
        return 1;
    }

    bool Veiculo::isDisponivel() {
        return this->disponivel;
    }

    int Veiculo::setDisponivel(bool disponivel) {
        this->disponivel = disponivel;
        return 1;
    }

    Veiculo::Veiculo() {
        setTipo("");
        setMarca("");
        setModelo("");
        setAno(0);
        setQuilometragem(0);
        setPlaca("");
        setChassi("");
        setLocalizacao(0,0);
        setCapacidadePeso(0);
        setCapacidadeVol(0);
        setDisponivel(false);
        criaId();
    }

    Veiculo::Veiculo(string tipo, string marca, string modelo, string placa, string chassi, Localizacao localizacao, int ano, int capacidadePeso, int capacidadeVol, int quilometragem, bool disponivel) {
        setTipo(tipo);
        setMarca(marca);
        setModelo(modelo);
        setAno(ano);
        setQuilometragem(quilometragem);
        setPlaca(placa);
        setChassi(chassi);
        setLocalizacao(localizacao);
        setCapacidadePeso(capacidadePeso);
        setCapacidadeVol(capacidadeVol);
        setDisponivel(disponivel);
        criaId();
    }

    Veiculo::Veiculo(string tipo, string marca, string modelo, string placa, string chassi, double locLati, double locLong, int ano, int capacidadePeso, int capacidadeVol, int quilometragem, bool disponivel) {
        setTipo(tipo);
        setMarca(marca);
        setModelo(modelo);
        setAno(ano);
        setQuilometragem(quilometragem);
        setPlaca(placa);
        setChassi(chassi);
        setLocalizacao(locLati, locLong);
        setCapacidadePeso(capacidadePeso);
        setCapacidadeVol(capacidadeVol);
        setDisponivel(disponivel);
        criaId();
    }

    Veiculo::~Veiculo() {}

    void Veiculo::infoVeiculo() {
        cout << "\n\n           Informacoes do veiculo\n\n";
        cout << "                Tipo: " << getTipo() << endl;
        cout << "               Marca: " << getMarca() << endl;
        cout << "              Modelo: " << getModelo() << endl;
        cout << "                 Ano: " << getAno() << endl;
        cout << "       Quilometragem: " << getQuilometragem() << " KM" << endl;
        cout << "               Placa: " << getPlaca() << endl;
        cout << "              Chassi: " << getChassi() << endl;
        cout << "            Latitude: " << getLocalizacao().getLatitude() << endl;
        cout << "           Longitude: " << getLocalizacao().getLongitude() << endl;
        cout << "  Capacidade de peso: " << getCapacidadePeso() << " KG" << endl;
        cout << "Capacidade de volume: " << getCapacidadeVol() << " L" << endl;
        cout << "          Disponivel: " << boolalpha << isDisponivel() << noboolalpha << endl;
        cout << "                  Id: " << getId() << endl;
    }

    bool Veiculo::operator == (Veiculo veiculo) {
        return (this->id == veiculo.getId());
    }

    ostream& operator<<(ostream& stream, Veiculo veiculo) {
        stream << "\n\n           Informacoes do veiculo\n\n"
               << "                Tipo: " << veiculo.getTipo() << endl
               << "               Marca: " << veiculo.getMarca() << endl
               << "              Modelo: " << veiculo.getModelo() << endl
               << "                 Ano: " << veiculo.getAno() << endl
               << "       Quilometragem: " << veiculo.getQuilometragem() << " KM" << endl
               << "               Placa: " << veiculo.getPlaca() << endl
               << "              Chassi: " << veiculo.getChassi() << endl
               << "            Latitude: " << veiculo.getLocalizacao().getLatitude() << endl
               << "           Longitude: " << veiculo.getLocalizacao().getLongitude() << endl
               << "  Capacidade de peso: " << veiculo.getCapacidadePeso() << " KG" << endl
               << "Capacidade de volume: " << veiculo.getCapacidadeVol() << " L" << endl
               << "          Disponivel: " << boolalpha << veiculo.isDisponivel() << noboolalpha << endl
               << "                  Id: " << veiculo.getId() << endl;

        return stream;
    }