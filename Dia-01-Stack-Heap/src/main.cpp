#include <iostream>

int main() {
    // Stack - almacenamiento pequeño, dura lo que tarde la funcion, automático
    //int edadStack = 19;

    // Heap - Puede almacenar GBs de acuerdo a la RAM, recordar siempre hacer delet para evitar memory leaks
    //int* edadHeap = new int(19);

    // Prueba con doble puntero
    //int** doblePuntero = &edadHeap;

    //std::cout << "Edad como Stack: " << edadStack << " |Direccion: " << &edadStack <<  std::endl;
    //std::cout << "Edad como Heap: " << *edadHeap << " |Direccion: " << edadHeap <<std::endl;
    //std::cout << "Doble puntero: " << *doblePuntero <<std::endl;

    // Prueba de memory leaks
    std::cout << "Prueba de Memory Leak, ingresa el admin de tareas y a Rendimiento para observar consumo de RAM" << std::endl;
    std::cout << "Presiona enter para iniciar el Leak:" << std::endl;
    std::cin.get();
    
    const int CANTIDAD = 10000000;  // 10 millones
    
    for (int i = 0; i < CANTIDAD; i++) {
        int* leak = new int(i);
        
        // Mostrar progreso cada 1 millón
        if (i % 1000000 == 0 && i != 0) {
            std::cout << "Progreso: " << i << " leaks creados (" << (i * 4 / 1024 / 1024) << " MB)" << std::endl;
        }
    }

    std::cout << "\n!!! LEAK COMPLETADO !!!" << std::endl;
    std::cout << "Memoria perdida: ~" << (CANTIDAD * 4 / 1024 / 1024) << " MB" << std::endl;
    std::cout << "Presiona Enter para salir (Windows liberara todo)..." << std::endl;
    std::cin.get();

    //delete edadHeap;
    return 0;
};
