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

    Peso& operator++ ();
    Peso& operator-- ();

    Peso  operator++ (int)
    {
        Peso result(*this);
        ++(*this);
        return result;
    }

    Peso  operator-- (int)
    {
        Peso result(*this);
        --(*this);
        return result;
    }

    friend Peso operator+(const Peso &a, const Peso &b);
    friend Peso operator-(const Peso &a, const Peso &b);

    double getValorMXN() const;
    double getValorUSD() const;

    std::string toStringMXN(Peso &valor);
};


#endif //FRACCION_PESO_H
