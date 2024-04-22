#ifndef PEDIDO_H
#define PEDIDO_H
#include "includeAll.hpp"

class Pedido {
    private:
        int id;
        static int proxId;
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

        int criaId();

    public:
        int getId();

        Cliente getCliente();
        int setCliente(Cliente cliente);

        Veiculo getVeiculo();
        int setVeiculo(Veiculo veiculo);

        string getCarga();
        int setCarga(string carga);

        string getLocalColeta();
        int setLocalColeta(string localColeta);

        string getLocalEntrega();
        int setLocalEntrega(string localEntrega);

        string getStatus();
        int setStatus(string status);

        float getPreco();
        int setPreco(float preco);

        int getDistancia();
        int setDistancia(int distancia);

        int getPeso();
        int setPeso(int peso);

        int getVolume();
        int setVolume(int volume);

        Pedido();

        Pedido(Cliente cliente, Veiculo veiculo, string carga, string localColeta, string localEntrega, string status, float preco, int distancia, int peso, int volume);

        ~Pedido();

        void infoPedido();

        bool operator == (Pedido pedido);
        
        friend ostream& operator<<(ostream& stream, Pedido pedido);
};


#endif