//
// Created by Pablo on 02/04/2018.
//

#include <iostream>
#include "Dolar.h"


//Constructor
Dolar::Dolar(double valor) {
    this->valorUSD = valor;
}


//To String functions
std::string Dolar::toStringUSD(Dolar &valor) {
    std::string total;
    total = std::to_string(valor.getValorUSD());
    std::cout<<"$" + total + " USD"<< "\n";;
}



//Getters
double Dolar::getValorUSD() const {
    return valorUSD;
}

//Dolar+Dolar
Dolar operator+(const Dolar &a, const Dolar &b) {
    Dolar answer(a.valorUSD+b.valorUSD);
    answer.toStringUSD(answer);
}

Dolar operator+(const Peso &a, const Dolar &b) {
    double pesoToUsd;
    pesoToUsd = a.getValorMXN()*a.getValorUSD();
    Dolar answer(pesoToUsd+b.valorUSD);

    Peso answerPeso(answer.valorUSD*b.getValorMXN());
    answer.toStringUSD(answer);
    answerPeso.toStringMXN(answerPeso);
}

Dolar operator+(const Dolar &a, const Peso &b) {
    double pesoToUsd;
    pesoToUsd = b.getValorMXN()*b.getValorUSD();
    Dolar answer(a.valorUSD+pesoToUsd);

    Peso answerPeso(answer.valorUSD*a.getValorMXN());
    answer.toStringUSD(answer);
    answerPeso.toStringMXN(answerPeso);
}

double Dolar::getValorMXN() const {
    return valorMXN;
}

Dolar operator-(const Dolar &a, const Dolar &b) {
    Dolar answer(a.valorUSD-b.valorUSD);
    answer.toStringUSD(answer);
}

Dolar operator-(const Peso &a, const Dolar &b) {
    double pesoToUsd;
    pesoToUsd = a.getValorMXN()*b.getValorMXN();
    Dolar answer(pesoToUsd-b.valorUSD);

    answer.toStringUSD(answer);
}

Dolar operator-(const Dolar &a, const Peso &b) {
    double pesoToUsd;
    pesoToUsd = b.getValorMXN()*a.getValorMXN();
    Dolar answer(a.valorUSD-pesoToUsd);

    answer.toStringUSD(answer);
}

Dolar operator++(const Dolar &a) {
    Dolar answer(a.valorUSD+1.0);
    answer.toStringUSD(answer);
}

Dolar operator--(const Dolar &a) {
    Dolar answer(a.valorUSD-1.0);
    answer.toStringUSD(answer);
}

bool operator>(const Peso &a, const Dolar &b) {
    double mx,us;

    mx= a.getValorMXN()*a.getValorUSD();
    us= b.getValorUSD();

    return mx>us;

}

bool operator<(const Peso &a, const Dolar &b) {
    double mx,us;

    mx= a.getValorMXN()*a.getValorUSD();
    us= b.getValorUSD();

    return mx<us;
}

bool operator>=(const Peso &a, const Dolar &b) {
    double mx,us;

    mx= a.getValorMXN()*a.getValorUSD();
    us= b.getValorUSD();

    return mx>=us;
}

bool operator<=(const Peso &a, const Dolar &b) {
    double mx,us;

    mx= a.getValorMXN()*a.getValorUSD();
    us= b.getValorUSD();

    return mx<=us;
}

bool operator==(const Peso &a, const Dolar &b) {
    double mx,us;

    mx= a.getValorMXN()*a.getValorUSD();
    us= b.getValorUSD();

    return mx==us;
}

bool operator!=(const Peso &a, const Dolar &b) {
    double mx,us;

    mx= a.getValorMXN()*a.getValorUSD();
    us= b.getValorUSD();

    return mx!=us;
}



