//
// Created by Pablo on 02/04/2018.
//

#ifndef FRACCION_DOLAR_H
#define FRACCION_DOLAR_H


#include "Peso.h"

class Peso;

class Dolar {
private:
    double valorMXN = 18.50;
    double valorUSD;

public:

    explicit Dolar(double valorUSD);
    friend Dolar operator+(const Dolar &a, const Dolar &b);
    friend Dolar operator+(const Peso &a, const Dolar &b);
    friend Dolar operator+(const Dolar &a, const Peso &b);
    friend Dolar operator-(const Dolar &a, const Dolar &b);
    friend Dolar operator-(const Peso &a, const Dolar &b);
    friend Dolar operator-(const Dolar &a, const Peso &b);


    friend Dolar operator++(const Dolar &a);
    friend Dolar operator--(const Dolar &a);

    friend bool operator>(const Peso &a, const Dolar &b);
    friend bool operator<(const Peso &a, const Dolar &b);
    friend bool operator>=(const Peso &a, const Dolar &b);
    friend bool operator<=(const Peso &a, const Dolar &b);
    friend bool operator==(const Peso &a, const Dolar &b);
    friend bool operator!=(const Peso &a, const Dolar &b);

    friend bool operator>(const Dolar &a, const Peso &b);
    friend bool operator<(const Dolar &a, const Peso &b);
    friend bool operator>=(const Dolar &a, const Peso &b);
    friend bool operator<=(const Dolar &a, const Peso &b);
    friend bool operator==(const Dolar &a, const Peso &b);
    friend bool operator!=(const Dolar &a, const Peso &b);

    double getValorMXN() const;

    std::string toStringUSD(Dolar &valor);


    double getValorUSD() const;
};


#endif //FRACCION_DOLAR_H
