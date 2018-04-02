//
// Created by Pablo on 02/04/2018.
//

#ifndef FRACCION_PESO_H
#define FRACCION_PESO_H

#include <string>
#include "Dolar.h"

class Peso {
private:
    double valorMXN;
    double valorUSD = 0.0540540540540541;

public:
    explicit Peso(double valorMXN);

    friend Peso operator+(const Peso &a, const Peso &b);
    friend Peso operator-(const Peso &a, const Peso &b);
    friend Peso operator++(const Peso &a);
    friend Peso operator--(const Peso &a);

    double getValorMXN() const;
    double getValorUSD() const;

    std::string toStringMXN(Peso &valor);
};


#endif //FRACCION_PESO_H
