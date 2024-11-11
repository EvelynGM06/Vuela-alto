#include <iostream>
#include "person.cpp"
#include "shipment.cpp"

using namespace std;

//Tenemos que craer un .h y un .cpp por cada clase
//.h estan las declaraciones
//.cpp está el desarrollo de métodos
//envios.cpp


int main(){
    //persona a quien se lo mando
    Person evelyn;
    evelyn.setName("Evelyn Gamboa");
    cout<<"Nombre: "<<evelyn.getName()<<endl;
    evelyn.setAdress("Calle 10, numero 511");
    cout<<"Direccion: "<<evelyn.getAdress()<<endl;
    evelyn.setPhone("833 255 0618");
    cout<<"Telefono: "<<evelyn.getPhone()<<endl;

    //persona que lo envia 
    Person erin;
    erin.setName("Erin Gamboa");
    cout<<"Nombre: "<<erin.getName()<<endl;

    //enviar a la clase shipment las dos personas, osea le envio el objeto persona que ya inicialice 
    Shipment envio1;
    envio1.setsender(erin);
    cout<<"La persona que lo envio es: "<<envio1.getsender().getName()<<endl;
    envio1.setrecipient(evelyn);
    cout<<"La persona que lo recibe es: "<<envio1.getrecipient().getName()<<endl;

    //la hora que la paqueteria pase por el paquete o que la persona recoja el paquete depende del contexto
    envio1.setpickUpTime("10:00");
    cout<<"La hora elegida para que pasen por el paquete es: " <<envio1.getpickUpTime()<<endl;

    
    
    return 0;
}
