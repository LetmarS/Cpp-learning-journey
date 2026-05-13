#include <iostream>

int main() {
    // Stack - almacenamiento pequeño, dura lo que tarde la funcion, automático
    int edadStack = 19;

    // Heap - Puede almacenar GBs de acuerdo a la RAM, recordar siempre hacer delet para evitar memory leaks
    int* edadHeap = new int(19);

    std::cout << "Edad como Stack: " << edadStack << " |Direccion: " << &edadStack <<  std::endl;
    std::cout << "Edad como Heap: " << *edadHeap << " |Direccion: " << edadHeap <<std::endl;

    delete edadHeap;
    return 0;
};
