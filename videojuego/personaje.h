#include <iostream>
#include "objeto.h"
#include "propiedades.h"
#include "mochila.h"

class Personaje{
    private:
    Objeto posicion;
    Propiedades caracateristicas;
    Mochila mochila;
    int danoRecibido;

    public:
    Personaje(Objeto posicion,Propiedades caracteristicas);
    Objeto getPosicion();
    Propiedades getcaracteristicas();
    void recogerObjeto(Objeto* objeto);
    void soltarObjeto(Objeto* objeto);
    void actualizarPropiedades();
};