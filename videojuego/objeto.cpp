#include "objeto.h"
#include <string>

Objeto::Objeto(){

}
Objeto::~Objeto(){

}

int Objeto::getcoordenada_x(){
    return coordenada_x;
}
void Objeto::setcoordenada_x(int ncoordenada_x){
    coordenada_x=ncoordenada_x;
}
int Objeto::getcoordenada_y(){
    return coordenada_y;
}
void Objeto::setcoordenada_y(int ncoordenada_y){
    coordenada_y=ncoordenada_y;
}
