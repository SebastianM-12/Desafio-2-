#ifndef PERFIL_H
#define PERFIL_H

#include "anfitrion.h"
#include "huesped.h"
#include <iostream>

using namespace std;

class perfil {
private:
    iniciar_anfitrion* inicioA;
    menu_huesped* menuH;
    int tipo;

public:
    perfil(int tipo_perfil);
    ~perfil();
    void mostrarmunenuperfiles();
};

#endif // PERFIL_H
