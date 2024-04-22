#include "includeAll.hpp"

int main(void) {

    Veiculo* veiculo1 = new Veiculo("Van", "Mercedes", "Sprinter", "abc1234", "abcdefgh123456789", -29.7894, -55.7684, 2018, 1300, 9000, 244913, 1);
    Veiculo* veiculo2 = new Veiculo("Carro", "Volkswagen", "Gol", "xyz1234", "bcdefghij12345678", -29.7894, -55.7684, 2014, 300, 400, 87500, 1);

    Caminhao caminhao1("Scania", "s620", "abc2345", "abcdefghi12345678", -29.7894, -55.7684, 2016, 25000, 90000, 845638, 1);

    Cliente cliente1("PF", "Tiago", "Alegrete", "55999999999", "tiago@gmail.com");

    Pedido pedido1(cliente1, *veiculo1, "madeira", cliente1.getEndereco(), "Porto Alegre", "aguardando coleta", 3500, 500, 1000, 1000);


    cout << *veiculo1 << endl;
    cout << *veiculo2 << endl;
    cout << caminhao1 << endl;
    cout << cliente1 << endl;
    cout << pedido1 << endl;

    if(*veiculo2 == *veiculo2)
        cout << "igual" << endl;
    else
        cout << "diferente" << endl;
    if(*veiculo1==*veiculo2)
        cout << "igual" << endl;
    else
        cout << "diferente" << endl;
    if(cliente1 == cliente1)
        cout << "igual" << endl;
    else
        cout << "diferente" << endl;
    if(pedido1 == pedido1)
        cout << "igual" << endl;
    else
        cout << "diferente" << endl;

    delete veiculo1;
    delete veiculo2;

    return 0;
}