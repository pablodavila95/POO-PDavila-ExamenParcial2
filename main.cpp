#include <iostream>
#include "Peso.h"
#include "Dolar.h"

int main() {

    Dolar dolar1(10);
    Dolar dolar2(5);
    Dolar sameusd(1);


    Peso peso1(1850);
    Peso peso2(500);
    Peso samemxn(18.50);
    dolar1+dolar2;
    dolar1-dolar2;
    dolar1+peso1;
    dolar1-peso1; //check
    peso1+dolar1;
    peso1-dolar1;
    peso1+peso2;
    peso1-peso2;

    peso1>dolar1;
    peso1<dolar1;
    peso1>=dolar1;
    peso1<=dolar1;
    peso1!=dolar1;
    samemxn==sameusd;
    sameusd==samemxn;

    dolar1<peso1;

    dolar1++;
    peso1++;



    return 0;
}