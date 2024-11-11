#include "shipment.h"
#include <string>

string Shipment::getpickUpTime(){
    return pickUpTime;
}
void Shipment::setpickUpTime(string npickUpTime){
    pickUpTime=npickUpTime;
}
Person Shipment ::getsender(){
    return sender;
}
void Shipment::setsender(Person nsender){
    sender=nsender;
}
Person Shipment ::getrecipient(){
    return recipient;
}
void Shipment::setrecipient(Person nrecipient){
    recipient=nrecipient;
}
