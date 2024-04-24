#ifndef LOCALIZACAO_H
#define LOCALIZACAO_H
#include "includeAll.hpp"

class Localizacao {
    private:

        double latitude;
        double longitude;

    public:
        Localizacao();

        Localizacao(double latitude, double longitude);

        ~Localizacao();

        double getLatitude();
        int setLatitude(double latidude);

        double getLongitude();
        int setLongitude(double longitude);

        int setLatLon(double latitude, double longitude);

        bool operator == (Localizacao localizacao);

        friend ostream& operator<<(ostream& stream, Localizacao localizacao);
};

#endif