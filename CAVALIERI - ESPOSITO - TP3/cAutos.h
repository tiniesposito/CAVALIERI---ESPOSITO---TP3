#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "cVehiculos.h"
#include "funciones.h"
using namespace std;

class fecha;


class cAutos :
    public cVehiculos
{
   /* Los autos pueden alquilar sillas de seguridad para ni�os.*/
    int cantSillaSeguridad;
    float precioDia;
public:
    cAutos(int capacidad_pasajeros, int chasis, eColor color, int patente, int poliza, float tarifaBase, fecha* ultimo_mantenimiento, bool esta_circulando, int cantSillaSeguridad, float precioDia);
    ~cAutos();
    void Imprimir();
    string To_string();
    float CalcularTarifa();
    void PasosMantenimientoAuto();
    void set_circulacion(bool circ);
    bool get_circulacion();
    int getPatente();
};
