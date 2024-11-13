#include <iostream>
#include <string>

using namespace std;

class Propiedades{
    private:
    string nombre;
    int nivelEnergia;
    int numVidas;
    int capacidadOfensiva;

    public:
    Propiedades();
    ~Propiedades();
    Propiedades(const Propiedades& otrasPropiedades);
    string getnombre();
    void setnombre(string nnombre);
    int getnivelEnergia();
    void setnivelEnergia(int nnivelEnergia);
    int getnumVidas();
    void setnumVidas(int nnumVidas);
    int getcapacidadOfensiva();
    void setcapacidadOfensiva(int ncapacidadOfensiva);
};