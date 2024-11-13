#include <iostream>
#include <string>

using namespace std;

class Objeto{
    private:
    int coordenada_x;
    int coordenada_y;

    public:
    Objeto();
    ~Objeto();
    int getcoordenada_x();
    void setcoordenada_x(int ncoordenada_x);
    int getcoordenada_y();
    void setcoordenada_y(int ncoordenada_y);

    bool operator==(const Objeto& otro) const{
        return coordenada_x==otro.coordenada_x && coordenada_y== otro.coordenada_y;
    }
};
