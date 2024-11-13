#include "mochila.h"
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

void Mochila::agregarObjeto(Objeto* objeto){
    objetos.push_back(objeto);
}
void Mochila::eliminarObjeto(Objeto* objeto){
    auto it=find(objetos.begin(),objetos.end(),objeto);
    if (it != objetos.end()){
        objetos.erase(it);
    }
    
}
