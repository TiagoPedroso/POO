#include "includeAll.hpp"

    Localizacao::Localizacao() {
        this->latitude = 0;
        this->longitude = 0;
    }

    Localizacao::Localizacao(double latitude, double longitude) {
        this->setLatLon(latitude, longitude);
    }

    Localizacao::~Localizacao() {}

    double Localizacao::getLatitude() {
        return this->latitude;
    }
    int Localizacao::setLatitude(double latidude) {
        if(latidude>=-90 && latidude<=90) {
            this->latitude = latidude;
            return 1;
        }
        this->latitude = 0;
        return 0;
    }

    double Localizacao::getLongitude() {
        return this->longitude;
    }
    int Localizacao::setLongitude(double longitude) {
        if(longitude>=-180 && longitude<=180) {
            this->longitude = longitude;
            return 1;
        }
        this->longitude = 0;
        return 0;
    }

    int Localizacao::setLatLon(double latitude, double longitude) {
        //this->setLatitude(latitude);
        //this->setLongitude(longitude);
        return (this->setLatitude(latitude) && this->setLongitude(longitude));
    }

    bool Localizacao::operator == (Localizacao localizacao) {
        return (this->latitude == localizacao.latitude && this->longitude == localizacao.longitude);
    }

    ostream& operator<<(ostream& stream, Localizacao localizacao) {
        stream << "\n\n           Informacoes da localizacao\n\n"
               << "            Latitude: " << localizacao.getLatitude() << endl
               << "           Longitude: " << localizacao.getLongitude() << endl;

        return stream;
    }