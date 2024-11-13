#include "objeto.h"
#include "propiedades.h"
#include <iostream>

class Enemigo{
    private:
    Objeto posicion;
    Propiedades caracteristicas;

    public:
    void actualizarPropiedades();
};