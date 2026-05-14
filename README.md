> **Nota:** Los ejecutables en `bin/` no se suben a GitHub. Se generan localmente con `g++`.

---

## 🛠️ Stack Tecnológico

| Herramienta | Versión / Detalle |
|-------------|-------------------|
| **Lenguaje** | C++17 (`-std=c++17`) |
| **Compilador** | g++ (MinGW-w64 via MSYS2) |
| **IDE/Editor** | Visual Studio Code |
| **Extensiones** | C/C++ (Microsoft), GitLens, Code Runner |
| **Control de versiones** | Git + GitHub |

---

## ⚡ Cómo compilar y ejecutar

Desde la terminal integrada de VSCode (Ctrl + "):

-> Compilar (Para generar el ejecutable en bin/):
g++ src/main.cpp -o bin/main.exe -Wall -Wextra -std=c++17

-> Ejecutar:
bin\main.exe

## 📈 Progreso Detallado

# Día 01 — Stack vs Heap, Punteros, Doble Puntero
    ✅ Comprensión de memoria stack (automática, limitada) vs heap (manual, grande)
    ✅ Sintaxis de punteros: *, &, aritmética básica
    ✅ Doble puntero ** y triple puntero ***
    ✅ Experimento de memory leak con Task Manager
    ✅ Configuración de VSCode + g++ + Git
    Archivos: ./Dia-01-Stack-Heap

# Día 02 - Arrays
    -. Objetivo: Construir una agenda telefónica que crece dinámicamente. Entender por qué C++ te obliga a controlar la memoria cuando no sabés el tamaño de antemano.


## 🤝 Cómo usar este repo
Si eres estudiante de C++ como yo:
Clona el repo: git clone https://github.com/LetmarS/Cpp-learning-journey.git
Lee el README.md del día que te interese. Compila los ejercicios y experimenta con los valores
y compara tus notas con las mías.