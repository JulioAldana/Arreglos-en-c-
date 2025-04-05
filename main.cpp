#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int MAX = 10; // el maximo de tareas a ingresar
    string tareas[MAX]; // arreglo para guardar tareas
    int cantidad = 0;   // la cantidad de tareas registradas
    int opcion;

    do {
        cout << "\nAGENDA DE TAREAS\n";
        cout << "1. Agregar tarea\n";
        cout << "2. Ver tareas\n";
        cout << "3. Guardar tareas en archivo\n";
        cout << "4. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;
        cin.ignore();
        if (opcion == 1) {
            if (cantidad < MAX) {
                cout << "Ingresa la tarea: ";
                getline(cin, tareas[cantidad]);
                cantidad++;
                cout << "Tarea agregada.\n";
            } else {
                cout << "Límite de tareas alcanzado.\n";
            }
        }


    } while (opcion != 4);

    return 0;
}