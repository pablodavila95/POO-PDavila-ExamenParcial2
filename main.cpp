#include <iostream>
#include "Fraccion.h"

int main() {
    Fraccion test1(3,4);
    Fraccion test2(4,5);

    test1 + test2;

    test1 - test2;

    test1 * test2;

    test1 / test2;
    //los comentarios indican cual es el valor que deberia arrojarse
    test1 > test2; //false

    test1 < test2;  //true

    Fraccion test3(1,2);
    Fraccion test4(2,4);

    test3 >= test4; //true
    test1 >= test2; //false
    test3<= test4; //true
    test1 <= test2; //true
    test3 == test4; //true
    test3 != test4; //false

    return 0;
}