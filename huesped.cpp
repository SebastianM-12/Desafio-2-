#include "huesped.h"
#include <fstream>

menu_huesped::menu_huesped() {
    elec = 0;
    op1 = new reservar();
    op2 = new anular_reservacion();
}

menu_huesped::~menu_huesped() {
    delete op1;
    delete op2;
}

void menu_huesped::menu() {
    do {
        cout << "\n=== Menu de Huesped ===" << endl;
        cout << "1. Reservar alojamiento\n";
        cout << "2. Anular reservacion\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> elec;

        switch (elec) {
            case 1:
                op1->informacion_anfitriones();
                break;
            case 2:
                op2->anular();
                break;
            case 3:
                cout << "Gracias por usar UdeAStay." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }

    } while (elec != 3);
}

reservar::reservar() {
    fecha = new string;
    nombre_h = new string;
    noche = new string;
}

reservar::~reservar() {
    delete fecha;
    delete nombre_h;
    delete noche;
}

void reservar::informacion_anfitriones() {
    cout << "Ingrese fecha de llegada (dd/mm/aaaa): ";
    cin >> *fecha;
    cout << "Ingrese nombre del anfitrion: ";
    cin >> *nombre_h;
    cout << "Ingrese numero de noches de estadia: ";
    cin >> *noche;

    ofstream archivo("reservas.txt", ios::app);
    if (archivo) {
        archivo << *fecha << " " << *nombre_h << " " << *noche << endl;
        cout << "Reserva registrada exitosamente.\n";
    } else {
        cout << "No se pudo registrar la reserva.\n";
    }
    archivo.close();
}

anular_reservacion::anular_reservacion() {
    codigo = new string;
}

anular_reservacion::~anular_reservacion() {
    delete codigo;
}

void anular_reservacion::anular() { //no terminanos la estructura de la clase aular reservacion.
    cout << "Ingrese el codigo de reserva a anular: ";
    cin >> *codigo;
    cout << "Intentando anular la reserva con codigo: " << *codigo << endl;

}
