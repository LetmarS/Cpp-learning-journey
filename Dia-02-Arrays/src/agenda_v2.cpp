#include <iostream>
#include <string>

int main() {
    int capacidad = 2;
    int cantidadPer = 0;

    // Se pasa puntero para guardar en heap
    std::string* nombres = new std::string[capacidad];
    std::string* numero = new std::string[capacidad];

    char continuar = 's';

    while(continuar == 's' || continuar == 'S') {
        
        if (cantidadPer >= capacidad) {
            int nuevaCap = capacidad * 2;
            // Redimension de los datos
            std::string* nuevoNombres = new std::string[nuevaCap];
            std::string* nuevoNum = new std::string[nuevaCap];

            // Para copiar los datos ya existentes
            for (int i = 0; i < cantidadPer; i++) {
                nuevoNombres[i] = nombres[i];
                nuevoNum[i] = numero[i];
            }

            // Liberamos el heap de la redimension
            delete[] nombres;
            delete[] numero;
            // Guardamos la info en la original
            nombres = nuevoNombres;
            numero = nuevoNum;
            capacidad = nuevaCap;

            std::cout << "Aumento de capacidad a " << capacidad << std::endl;
        }

        // Pedimos los datos
        std::cout << "Ingrese Nombre: " << std::endl;
        std::cin >> nombres[cantidadPer];
        std::cout << "Telefono: " << std::endl;
        std::cin >> numero[cantidadPer];
        cantidadPer++;

        std::cout << "Desea agregar otro contacto? (s/n): " << std::endl;
        std::cin >> continuar;
    }

    //Mostramos la lista
    std::cout << "\n    ---AGENDA TELEFONICA---     \n" << std::endl;
    for (int i = 0; i < cantidadPer; i++) {
        std::cout << i + 1 << ". " << nombres[i] << " | Telf: " << numero[i] << "\n" << std::endl;
    }

    delete[] nombres;
    delete[] numero;

    return 0;
}