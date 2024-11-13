#include "objeto.h"
#include "propiedades.h"

class Arma{
    private:
    Objeto posicion;
    Propiedades caracteristicas;
    int factorPotenciador;

    public:
    Arma(Objeto posicion, Propiedades caracteristicas);
    int getFactorPotenciador();
    void setFactorPotenciador(int nfactorPotenciador);
    void actualizarPropiedades();
};