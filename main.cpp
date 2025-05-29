#include <iostream>
#include "perfil.h"

using namespace std;

int main() {
    int opcion;
    cout << "=== BIENVENIDO A UdeAStay ===" << endl;
    cout << "Seleccione su perfil:\n";
    cout << "1. Anfitrion\n";
    cout << "2. Huesped\n";
    cout << "Opcion: ";
    cin >> opcion;

    perfil usuario(opcion);
    usuario.mostrarmunenuperfiles();

    return 0;
}
