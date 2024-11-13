#include "propiedades.h"
#include <string>

Propiedades::Propiedades(){

}
Propiedades::~Propiedades(){

}
Propiedades::Propiedades(const Propiedades& otrasPropiedades):nombre(otrasPropiedades.nombre),nivelEnergia(otrasPropiedades.nivelEnergia),numVidas(otrasPropiedades.numVidas),capacidadOfensiva(otrasPropiedades.capacidadOfensiva){}

string Propiedades::getnombre(){
    return nombre;
}
void Propiedades::setnombre(string nnombre){
    nombre=nnombre;
}
int Propiedades::getnivelEnergia(){
    return nivelEnergia;
}
void Propiedades::setnivelEnergia(int nnivelEnergia){
    nivelEnergia=nnivelEnergia;
}
int Propiedades::getnumVidas(){
    return numVidas;
}
void Propiedades::setnumVidas(int nnumVidas){
    numVidas=nnumVidas;
}
int Propiedades::getcapacidadOfensiva(){
    return capacidadOfensiva;
}
void Propiedades::setcapacidadOfensiva(int ncapacidadOfensiva){
    capacidadOfensiva=ncapacidadOfensiva;
}