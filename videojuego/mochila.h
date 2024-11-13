#include <iostream>
#include "objeto.h"
#include <vector>

using namespace std;

class Mochila{
    private:
    vector<Objeto*>objetos;

    public:
    void agregarObjeto(Objeto* objeto);
    void eliminarObjeto(Objeto* objeto);

};