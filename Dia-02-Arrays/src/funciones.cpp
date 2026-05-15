#include <iostream>
#include <string>

void duplicarPorValor(int numero) {
    numero *= 2;
    std::cout << "En funcion de duplicado lo que hay dentro es (Valor): " << numero << std::endl;
}

void duplicarPorReferencia(int& numero) {
    numero *= 2;
    std::cout << "En funcion de duplicado lo que hay dentro es (Ref): " << numero << std::endl;
}

void duplicarPorPuntero(int* numero) {
    *numero *= 2;
    std::cout << "En funcion de duplicado lo que hay dentro es (Ptr): " << *numero << std::endl;
}

int main() {

    int a = 10, b = 10, c = 10;

    std::cout << "Original: a = " << a << ", b = " << b << ", c = " << c << std::endl;

    duplicarPorValor(a);
    std::cout << "Despues de duplicar por valor: a = " << a << std::endl;

    duplicarPorReferencia(b);
    std::cout << "Despues de duplicar por ref: b = " << b << std::endl;

    duplicarPorPuntero(&c);
    std::cout << "Despues de duplicar por ptr: c = " << c << std::endl;

    return 0;
}