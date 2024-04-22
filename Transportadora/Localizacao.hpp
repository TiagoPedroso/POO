#ifndef LOCALIZACAO_H
#define LOCALIZACAO_H
#include "includeAll.hpp"

typedef struct localizacao {
    double latitude;
    double longitude;

    bool operator == (struct localizacao localizacao) {
        return (latitude == localizacao.latitude && longitude == localizacao.longitude);
    }

} Localizacao;

#endif