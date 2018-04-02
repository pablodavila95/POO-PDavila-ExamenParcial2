//
// Created by Pablo on 02/04/2018.
//

#include "Peso.h"
#include <iostream>
Peso::Peso(double valor) {
    this->valorMXN = valor;
}

double Peso::getValorMXN() const {
    return valorMXN;
}

double Peso::getValorUSD() const {
    return valorUSD;
}

Peso operator+(const Peso &a, const Peso &b) {
    Peso answer(a.valorMXN+b.valorMXN);
    answer.toStringMXN(answer);
}


Peso operator-(const Peso &a, const Peso &b) {
    Peso answer(a.valorMXN-b.valorMXN);
    answer.toStringMXN(answer);
}

Peso operator++(const Peso &a) {
    Peso answer(a.valorMXN+1.0);
    answer.toStringMXN(answer);
}

Peso operator--(const Peso &a) {
    Peso answer(a.valorMXN-1.0);
    answer.toStringMXN(answer);
}

std::string Peso::toStringMXN(Peso &valor) {
    std::string total;
    total = std::to_string(valor.getValorMXN());
    std::cout<<"$" + total + " MXN"<< "\n";;
}