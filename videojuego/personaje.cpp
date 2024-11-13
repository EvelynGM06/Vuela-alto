#include "personaje.h"
#include <iostream>

Personaje::Personaje(Objeto posicion,Propiedades caracteristicas):posicion(posicion),caracteristicas(caracteristicas){}
Objeto Personaje::getPosicion(){
    return posicion;
}
Propiedades Personaje::getcaracteristicas(){
    return caracteristicas;
}
void Personaje::recogerObjeto(Objeto* objeto){
    mochila.agregarObjeto(objeto);
}
void Personaje::soltarObjeto(Objeto* objeto){
    mochila.eliminarObjeto(objeto);
}
void Personaje::actualizarPropiedades(){
    //Sigo sin saber cuales poner
}