#ifndef CLIENTE_H
#define CLIENTE_H
#include "includeAll.hpp"

class Cliente {
    private:
        int id;
        static int proxId;
        string tipo;
        string nome;
        string cadastro; // cpf ou cnpj
        Localizacao endereco;
        string telefone;
        string email;

        int criaId();

    public:
        int getId();

        string getTipo();
        int setTipo(string tipo);

        string getNome();
        int setNome(string nome);

        string getCadastro();
        int setCadastro(string cadastro);

        Localizacao getEndereco();
        int setEndereco(Localizacao endereco);
        int setEndereco(double latitude, double longitude);

        string getTelefone();
        int setTelefone(string telefone);

        string getEmail();
        int setEmail(string email);

        Cliente();

        Cliente(string tipo, string nome, string cadastro, Localizacao endereco, string telefone, string email);

        Cliente(string tipo, string nome, string cadastro, double latitude, double longitude, string telefone, string email);

        ~Cliente();

        void infoCliente();

        bool operator == (Cliente cliente);

        friend ostream& operator<<(ostream& stream, Cliente cliente);
};


#endif