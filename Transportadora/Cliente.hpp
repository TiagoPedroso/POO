#ifndef CLIENTE_H
#define CLIENTE_H
#include "includeAll.hpp"

class Cliente {
    private:
        int id;
        static int proxId;
        string tipo;
        string nome;
        string endereco;
        string telefone;
        string email;

        int criaId();

    public:
        int getId();

        string getTipo();
        int setTipo(string tipo);

        string getNome();
        int setNome(string nome);

        string getEndereco();
        int setEndereco(string endereco);

        string getTelefone();
        int setTelefone(string telefone);

        string getEmail();
        int setEmail(string email);

        Cliente();

        Cliente(string tipo, string nome, string endereco, string telefone, string email);

        ~Cliente();

        void infoCliente();

        bool operator == (Cliente cliente);

        friend ostream& operator<<(ostream& stream, Cliente cliente);
};


#endif