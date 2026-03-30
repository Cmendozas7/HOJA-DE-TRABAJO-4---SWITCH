//
// Created by Carlos Mendoza on 29/03/2026.
//

#include <iostream>
using namespace std;

int main() {
    int opcion;
    double numero;


   do {
        // Mostrar menú
        cout << "\n----- MENU DE OPCIONES -----" << endl;
        cout << "1. Mostrar los numeros del 1 al 5" << endl;
        cout << "2. Mostrar los numeros pares del 2 al 10" << endl;
        cout << "3. Ingresar un numero y mostrar si es positivo o negativo" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nNumeros del 1 al 5:" << endl;
                for (int i = 1; i <= 5; i++) {
                    cout << i << " ";
                }
                cout << endl;
                break;

            case 2:
                cout << "\nNumeros pares del 2 al 10:" << endl;
                for (int i = 2; i <= 10; i += 2) {
                    cout << i << " ";
                }
                cout << endl;
                break;

            case 3:
                cout << "\nIngrese un numero: ";
                cin >> numero;

                if (numero > 0) {
                    cout << "El numero es POSITIVO." << endl;
                }
                else if (numero < 0) {
                    cout << "El numero es NEGATIVO." << endl;
                }
                else {
                    cout << "El numero es CERO." << endl;
                }
                break;

            case 4:
                cout << "\nSaliendo del programa..." << endl;
                break;

            default:
                cout << "\nERROR: Opcion invalida. Intente nuevamente." << endl;
                continue; // regresa al inicio del menú sin ejecutar más código

        }

    } while (opcion != 4);

    return 0;
}