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
        Localizacao localColeta;
        Localizacao localEntrega;
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

        Localizacao getLocalColeta();
        int setLocalColeta(Localizacao localColeta);
        int setLocalColeta(double latitude, double lontitude);

        Localizacao getLocalEntrega();
        int setLocalEntrega(Localizacao localEntrega);
        int setLocalEntrega(double latitude, double longitude);

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

        Pedido(Cliente cliente, Veiculo veiculo, string carga, Localizacao localColeta, Localizacao localEntrega, string status, float preco, int distancia, int peso, int volume);

        Pedido(Cliente cliente, Veiculo veiculo, string carga, Localizacao localColeta, double latitudeEntrega, double longitudeEntrega, string status, float preco, int distancia, int peso, int volume);

        Pedido(Cliente cliente, Veiculo veiculo, string carga, double latitudeColeta, double longitudeColeta, double latitudeEntrega, double longitudeEntrega, string status, float preco, int distancia, int peso, int volume);

        ~Pedido();

        void infoPedido();

        bool operator == (Pedido pedido);
        
        friend ostream& operator<<(ostream& stream, Pedido pedido);
};


#endif