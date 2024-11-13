#include "arma.h"

Arma::Arma(Objeto posicion,Propiedades caracteristicas(caracteristicas)){}
int Arma::getFactorPotenciador(){
    return factorPotenciador;
}
void Arma::setFactorPotenciador(int nfactorPotenciador){
    factorPotenciador=nfactorPotenciador;
}
void Arma::actualizarPropiedades(){
    caracteristicas.setcapacidadOfensiva(caracteristicas.getcapacidadOfensiva()*factorPotenciador);
}