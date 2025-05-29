#include "perfil.h"

perfil::perfil(int tipo_perfil) {
    inicioA = nullptr;
    menuH = nullptr;
    tipo = tipo_perfil;

    if (tipo == 1) {
        inicioA = new iniciar_anfitrion();
    } else if (tipo == 2) {
        menuH = new menu_huesped();
    }
}

perfil::~perfil() {
    delete inicioA;
    delete menuH;
}

void perfil::mostrarmunenuperfiles() {
    if (tipo == 1 && inicioA) {
        inicioA->validar();
    } else if (tipo == 2 && menuH) {
        menuH->menu();
    } else {
        cout << "Opción no valida." << endl;
    }
}
