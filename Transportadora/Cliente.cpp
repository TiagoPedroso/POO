#include "includeAll.hpp"

    int Cliente::proxId = 1;

    int Cliente::criaId() {
        this->id = proxId;
        proxId++;
        return 1;
    }

    int Cliente::getId() {
        return this->id;
    }

    string Cliente::getTipo() {return this->tipo;}

    int Cliente::setTipo(string tipo) {
        this->tipo = tipo;
        return 1;
    }

    string Cliente::getNome() {return this->nome;}

    int Cliente::setNome(string nome) {
        this->nome = nome;
        return 1;
    }

    string Cliente::getCadastro() {return this->cadastro;}
    int Cliente::setCadastro(string cadastro) {
        this->cadastro = cadastro;
        return 1;
    }

    Localizacao Cliente::getEndereco() {return this->endereco;}

    int Cliente::setEndereco(Localizacao endereco) {
        this->endereco = endereco;
        return 1;
    }

    int Cliente::setEndereco(double latitude, double longitude) {
        return this->endereco.setLatLon(latitude, longitude);
    }

    string Cliente::getTelefone() {return this->telefone;}

    int Cliente::setTelefone(string telefone) {
        this->telefone = telefone;
        return 1;
    }

    string Cliente::getEmail() {return this->email;}

    int Cliente::setEmail(string email) {
        this->email = email;
        return 1;
    }

    Cliente::Cliente() {
        setTipo("");
        setNome("");
        setCadastro("");
        setEndereco(0,0);
        setTelefone("");
        setEmail("");
        criaId();
    }

    Cliente::Cliente(string tipo, string nome, string cadastro, Localizacao endereco, string telefone, string email) {
        setTipo(tipo);
        setNome(nome);
        setCadastro(cadastro);
        setEndereco(endereco);
        setTelefone(telefone);
        setEmail(email);
        criaId();
    }

    Cliente::Cliente(string tipo, string nome, string cadastro, double latitude, double longitude, string telefone, string email) {
        setTipo(tipo);
        setNome(nome);
        setCadastro(cadastro);
        setEndereco(latitude, longitude);
        setTelefone(telefone);
        setEmail(email);
        criaId();
    }

    Cliente::~Cliente() {}

    void Cliente::infoCliente() {
        cout << "\n\n           Informacoes do cliente\n\n";
        cout << "                Tipo: " << getTipo() << endl;
        cout << "                Nome: " << getNome() << endl;
        cout << "            Cadastro: " << getCadastro() << endl;
        cout << "   Latitude endereco: " << getEndereco().getLatitude() << endl;
        cout << "  Longitude endereco: " << getEndereco().getLongitude() << endl;
        cout << "            Telefone: " << getTelefone() << endl;
        cout << "               Email: " << getEmail() << endl;
        cout << "                  Id: " << getId() << endl;
    }

    bool Cliente::operator == (Cliente cliente) {
        return (this->id == cliente.getId());
    }

    ostream& operator<<(ostream& stream, Cliente cliente) {
        stream << "\n\n           Informacoes do cliente\n\n"
               << "                Tipo: " << cliente.getTipo() << endl
               << "                Nome: " << cliente.getNome() << endl
               << "            Cadastro: " << cliente.getCadastro() << endl
               << "   Latitude endereco: " << cliente.getEndereco().getLatitude() << endl
               << "  Longitude endereco: " << cliente.getEndereco().getLongitude() << endl
               << "            Telefone: " << cliente.getTelefone() << endl
               << "               Email: " << cliente.getEmail() << endl
               << "                  Id: " << cliente.getId() << endl;

        return stream;
    }