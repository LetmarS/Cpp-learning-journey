#include <iostream>
#include <string>

int main() {
    // Agenda con array estatico 5 contactos
    std::string nombres[5];
    std::string numero[5];
    int cantidadPersonas = 0;

    // Registros en agenda
    nombres[0] = "Maria";
    numero[0] = "414-1234567";
    cantidadPersonas++; //Suma persona

    nombres[1] = "Juan";
    numero[1] = "416-1234567";
    cantidadPersonas++;
    
    nombres[2] = "Pedro";
    numero[2] = "424-1234567";
    cantidadPersonas++;

    nombres[3] = "Laura";
    numero[3] = "276-5555555";
    cantidadPersonas++;

    nombres[4] = "Miguel";
    numero[4] = "426-7654321";
    cantidadPersonas++;

    std::cout << "      --AGENDA TELEFONICA--       \n" << std::endl;
    for (int i = 0; i < cantidadPersonas; i++) {
        std::cout << i + 1 << ". " << nombres[i] << " | Telf: " << numero[i] << "\n" << std::endl;
    }

    return 0;
}
