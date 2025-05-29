#ifndef HUESPED_H
#define HUESPED_H

#include <iostream>
#include <string>
using namespace std;

class reservar;
class anular_reservacion;

class menu_huesped {
private:
    reservar* op1;
    anular_reservacion* op2;
    int elec;

public:
    menu_huesped();
    ~menu_huesped();
    void menu();
};

class reservar {
private:
    string* fecha;
    string* nombre_h;
    string* noche;

public:
    reservar();
    ~reservar();
    void informacion_anfitriones();
};

class anular_reservacion {
private:
    string* codigo;

public:
    anular_reservacion();
    ~anular_reservacion();
    void anular();
};

#endif // HUESPED_H
