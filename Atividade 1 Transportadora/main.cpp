#include <iostream>

using namespace std;

class Veiculo {

    private:
        string tipo;
        string marca;
        string modelo;
        string placa;
        string chassi;
        string localizacao;
        int ano;
        int capacidadePeso;
        int capacidadeVol;
        int quilometragem;

    public:
        string getTipo() {return this->tipo;}
        void setTipo(string tipo) {this->tipo = tipo;}

        string getMarca() {return this->marca;}
        void setMarca(string marca) {this->marca = marca;}

        string getModelo() {return this->modelo;}
        void setModelo(string modelo) {this->modelo = modelo;}

        string getPlaca() {return this->placa;}
        void setPlaca(string placa) {this->placa = placa;}

        string getChassi() {return this->chassi;}
        void setChassi(string chassi) {this->chassi = chassi;}

        string getLocalizacao() {return this->localizacao;}
        void setLocalizacao(string localizacao) {this->localizacao = localizacao;}

        int getAno() {return this->ano;}
        void setAno(int ano) {this->ano = ano;}

        int getCapacidadePeso() {return this->capacidadePeso;}
        void setCapacidadePeso(int capacidadePeso) {this->capacidadePeso = capacidadePeso;}

        int getCapacidadeVol() {return this->capacidadeVol;}
        void setCapacidadeVol(int capacidadeVol) {this->capacidadeVol = capacidadeVol;}

        int getQuilometragem() {return this->quilometragem;}
        void setQuilometragem(int quilometragem) {this->quilometragem = quilometragem;}

        Veiculo() {}

        Veiculo(string tipo, string marca, string modelo, string placa, string chassi, string localizacao, int ano, int capacidadePeso, int capacidadeVol, int quilometragem) {
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
        }

        void infoVeiculo() {
            cout << "\n\n           Informacoes do veiculo\n\n";
            cout << "                Tipo: " << getTipo() << endl;
            cout << "               Marca: " << getMarca() << endl;
            cout << "              Modelo: " << getModelo() << endl;
            cout << "                 Ano: " << getAno() << endl;
            cout << "       Quilometragem: " << getQuilometragem() << " KM" << endl;
            cout << "               Placa: " << getPlaca() << endl;
            cout << "              Chassi: " << getChassi() << endl;
            cout << "         Localizacao: " << getLocalizacao() << endl;
            cout << "  Capacidade de peso: " << getCapacidadePeso() << " KG" << endl;
            cout << "Capacidade de volume: " << getCapacidadeVol() << " L" << endl;
        }
};

class Cliente {
    private:
        string tipo;
        string nome;
        string endereco;
        string telefone;
        string email;

    public:
        string getTipo() {return this->tipo;}
        void setTipo(string tipo) {this->tipo = tipo;}

        string getNome() {return this->nome;}
        void setNome(string nome) {this->nome = nome;}

        string getEndereco() {return this->endereco;}
        void setEndereco(string endereco) {this->endereco = endereco;}

        string getTelefone() {return this->telefone;}
        void setTelefone(string telefone) {this->telefone = telefone;}

        string getEmail() {return this->email;}
        void setEmail(string email) {this->email = email;}

        Cliente() {}

        Cliente(string tipo, string nome, string endereco, string telefone, string email) {
            setTipo(tipo);
            setNome(nome);
            setEndereco(endereco);
            setTelefone(telefone);
            setEmail(email);
        }

        void infoCliente() {
            cout << "\n\n           Informacoes do cliente\n\n";
            cout << "                Tipo: " << getTipo() << endl;
            cout << "                Nome: " << getNome() << endl;
            cout << "            Endereco: " << getEndereco() << endl;
            cout << "            Telefone: " << getTelefone() << endl;
            cout << "               Email: " << getEmail() << endl;
        }
};

class Pedido {
    private:
        Cliente cliente;
        Veiculo veiculo;
        string carga;
        string localColeta;
        string localEntrega;
        string status;
        float preco;
        int distancia;
        int peso;
        int volume;

    public:
        Cliente getCliente() {return this->cliente;}
        void setCliente(Cliente cliente) {this->cliente = cliente;}

        Veiculo getVeiculo() {return this->veiculo;}
        void setVeiculo(Veiculo veiculo) {this->veiculo = veiculo;}

        string getCarga() {return this->carga;}
        void setCarga(string carga) {this->carga = carga;}

        string getLocalColeta() {return this->localColeta;}
        void setLocalColeta(string localColeta) {this->localColeta = localColeta;}

        string getLocalEntrega() {return this->localEntrega;}
        void setLocalEntrega(string localEntrega) {this->localEntrega = localEntrega;}

        string getStatus() {return this->status;}
        void setStatus(string status) {this->status = status;}

        float getPreco() {return this->preco;}
        void setPreco(float preco) {this->preco = preco;}

        int getDistancia() {return this->distancia;}
        void setDistancia(int distancia) {this->distancia = distancia;}

        int getPeso() {return this->peso;}
        void setPeso(int peso) {this->peso = peso;}

        int getVolume() {return this->volume;}
        void setVolume(int volume) {this->volume = volume;}

        Pedido() {}

        Pedido(Cliente cliente, Veiculo veiculo, string carga, string localColeta, string localEntrega, string status, float preco, int distancia, int peso, int volume) {
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
        }

        void infoPedido() {
            cout << "\n\n           Informacoes do pedido\n\n";
            cout << "             Cliente: " << cliente.getNome() << endl;
            cout << "             Veiculo: " << veiculo.getModelo() << endl;
            cout << "               Carga: " << getCarga() << endl;
            cout << "        Local coleta: " << getLocalColeta() << endl;
            cout << "       Local entrega: " << getLocalEntrega() << endl;
            cout << "              Status: " << getStatus() << endl;
            cout << "               Preco: " << getPreco() << " R$" << endl;
            cout << "           Distancia: " << getDistancia() << " KM" << endl;
            cout << "                Peso: " << getPeso() << " KG" << endl;
            cout << "              Volume: " << getVolume() << " L" << endl;
        }
};

int main(void) {

    Veiculo veiculo1("Van", "Mercedes", "Sprinter", "abc1234", "abcdefgh123456789", "patio1", 2018, 1300, 9000, 244913);

    Cliente cliente1("PF", "Joao", "Alegrete", "55999999999", "joao@gmail.com");

    Pedido pedido1(cliente1, veiculo1, "madeira", cliente1.getEndereco(), "Porto Alegre", "aguardando coleta", 3500.00, 500, 1000, 1000);

    veiculo1.infoVeiculo();
    cliente1.infoCliente();
    pedido1.infoPedido();

    return 0;
}