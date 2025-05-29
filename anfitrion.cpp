#include "anfitrion.h"
#include <fstream>

iniciar_anfitrion::iniciar_anfitrion() {
    usu_anfi = "";
    contra = "";
}

void iniciar_anfitrion::validar() {
    cout << "Ingrese su usuario: ";
    cin >> usu_anfi;
    cout << "Ingrese su contrasena: ";
    cin >> contra;

    ifstream archivo("Usuario_anfitrion.txt");
    if (!archivo) {
        cout << "Error al abrir el archivo de usuarios." << endl;
        return;
    }

    string usuarioArchivo, contraArchivo;
    bool encontrado = false;

    while (archivo >> usuarioArchivo >> contraArchivo) {
        if (usuarioArchivo == usu_anfi && contraArchivo == contra) {
            encontrado = true;
            break;
        }
    }

    archivo.close();

    if (encontrado) {
        cout << "Inicio de sesion exitoso. Bienvenido " << usu_anfi << "!" << endl;
    } else {
        cout << "Usuario o contrasena incorrectos." << endl;
    }
}
