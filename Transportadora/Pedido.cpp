#include "includeAll.hpp"

    int Pedido::proxId = 1;

    int Pedido::criaId() {
        this->id = proxId;
        proxId++;
        return 1;
    }

    int Pedido::getId() {
        return this->id;
    }

    Cliente Pedido::getCliente() {return this->cliente;}

    int Pedido::setCliente(Cliente cliente) {
        this->cliente = cliente;
        return 1;
    }

    Veiculo Pedido::getVeiculo() {return this->veiculo;}
    
    int Pedido::setVeiculo(Veiculo veiculo) {
        this->veiculo = veiculo;
        return 1;
    }

    string Pedido::getCarga() {return this->carga;}

    int Pedido::setCarga(string carga) {
        this->carga = carga;
        return 1;
    }

    Localizacao Pedido::getLocalColeta() {return this->localColeta;}

    int Pedido::setLocalColeta(Localizacao localColeta) {
        this->localColeta = localColeta;
        return 1;
    }

    int Pedido::setLocalColeta(double latitude, double longitude) {
        this->localColeta.setLatitude(latitude);
        this->localColeta.setLongitude(longitude);
        return 1;
    }

    Localizacao Pedido::getLocalEntrega() {return this->localEntrega;}

    int Pedido::setLocalEntrega(Localizacao localEntrega) {
        this->localEntrega = localEntrega;
        return 1;
    }

    int Pedido::setLocalEntrega(double latitude, double longitude) {
        this->localEntrega.setLatitude(latitude);
        this->localEntrega.setLongitude(longitude);
        return 1;
    }

    string Pedido::getStatus() {return this->status;}

    int Pedido::setStatus(string status) {
        this->status = status;
        return 1;
    }

    float Pedido::getPreco() {return this->preco;}

    int Pedido::setPreco(float preco) {
        if(preco<0) {
            this->preco = 0;
            return 0;
        }
        this->preco = preco;
        return 1;
    }

    int Pedido::getDistancia() {return this->distancia;}

    int Pedido::setDistancia(int distancia) {
        if(distancia<0) {
            this->distancia = 0;
            return 0;
        }
        this->distancia = distancia;
        return 1;
    }

    int Pedido::getPeso() {return this->peso;}

    int Pedido::setPeso(int peso) {
        if(peso<0) {
            this->peso = 0;
            return 0;
        }
        this->peso = peso;
        return 1;
    }

    int Pedido::getVolume() {return this->volume;}

    int Pedido::setVolume(int volume) {
        if(volume<0) {
            this->volume = 0;
            return 0;
        }
        this->volume = volume;
        return 1;
    }

    Pedido::Pedido() {
        setCliente(Cliente());
        setVeiculo(Veiculo());
        setCarga("");
        setLocalColeta(0,0);
        setLocalEntrega(0,0);
        setStatus("");
        setPreco(0);
        setDistancia(0);
        setPeso(0);
        setVolume(0);
        criaId();
    }

    Pedido::Pedido(Cliente cliente, Veiculo veiculo, string carga, Localizacao localColeta, Localizacao localEntrega, string status, float preco, int distancia, int peso, int volume) {
        setCliente(cliente);
        setVeiculo(veiculo);
        setCarga(carga);
        setLocalColeta(localColeta);
        setLocalEntrega(localEntrega);
        setStatus(status);
        setPreco(preco);
        setDistancia(distancia);
        setPeso(peso);
        setVolume(volume);
        criaId();
    }

    Pedido::Pedido(Cliente cliente, Veiculo veiculo, string carga, Localizacao localColeta, double latitudeEntrega, double longitudeEntrega, string status, float preco, int distancia, int peso, int volume) {
        setCliente(cliente);
        setVeiculo(veiculo);
        setCarga(carga);
        setLocalColeta(localColeta);
        setLocalEntrega(latitudeEntrega, longitudeEntrega);
        setStatus(status);
        setPreco(preco);
        setDistancia(distancia);
        setPeso(peso);
        setVolume(volume);
        criaId();
    }


    Pedido::Pedido(Cliente cliente, Veiculo veiculo, string carga, double latitudeColeta, double longitudeColeta, double latitudeEntrega, double longitudeEntrega, string status, float preco, int distancia, int peso, int volume) {
        setCliente(cliente);
        setVeiculo(veiculo);
        setCarga(carga);
        setLocalColeta(latitudeColeta, longitudeColeta);
        setLocalEntrega(latitudeEntrega, longitudeEntrega);
        setStatus(status);
        setPreco(preco);
        setDistancia(distancia);
        setPeso(peso);
        setVolume(volume);
        criaId();
    }

    Pedido::~Pedido() {}

    void Pedido::infoPedido() {
        cout << "\n\n           Informacoes do pedido\n\n";
        cout << "             Cliente: " << cliente.getNome() << endl;
        cout << "             Veiculo: " << veiculo.getModelo() << endl;
        cout << "               Carga: " << getCarga() << endl;
        cout << "     Latitude coleta: " << getLocalColeta().getLatitude() << endl;
        cout << "    Longitude coleta: " << getLocalColeta().getLongitude() << endl;
        cout << "    Latitude entrega: " << getLocalEntrega().getLatitude() << endl;
        cout << "   Longitude entrega: " << getLocalEntrega().getLongitude() << endl;
        cout << "              Status: " << getStatus() << endl;
        cout << "               Preco: " << getPreco() << " R$" << endl;
        cout << "           Distancia: " << getDistancia() << " KM" << endl;
        cout << "                Peso: " << getPeso() << " KG" << endl;
        cout << "              Volume: " << getVolume() << " L" << endl;
        cout << "                  Id: " << getId() << endl;
    }

    bool Pedido::operator == (Pedido pedido) {
        return(this->id == pedido.getId());
    }

    ostream& operator<<(ostream& stream, Pedido pedido) {
        stream << "\n\n           Informacoes do pedido\n\n"
               << "             Cliente: " << pedido.getCliente().getNome() << endl
               << "             Veiculo: " << pedido.getVeiculo().getModelo() << endl
               << "               Carga: " << pedido.getCarga() << endl
               << "     Latitude coleta: " << pedido.getLocalColeta().getLatitude() << endl
               << "    Longitude coleta: " << pedido.getLocalColeta().getLongitude() << endl
               << "    Latitude entrega: " << pedido.getLocalEntrega().getLatitude() << endl
               << "   Longitude entrega: " << pedido.getLocalEntrega().getLongitude() << endl
               << "              Status: " << pedido.getStatus() << endl
               << "               Preco: " << pedido.getPreco() << " R$" << endl
               << "           Distancia: " << pedido.getDistancia() << " KM" << endl
               << "                Peso: " << pedido.getPeso() << " KG" << endl
               << "              Volume: " << pedido.getVolume() << " L" << endl
               << "                  Id: " << pedido.getId() << endl;

        return stream;
    }
