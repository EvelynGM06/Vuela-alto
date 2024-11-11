#include "person.h"
#include <string>

Person::Person(){

}
Person::~Person(){

}

string Person::getName(){
    return name;
}
void Person::setName(string nName){
    name=nName;
}
string Person::getAdress(){
    return address;
}
void Person::setAdress(string nAdress){
    address=nAdress;
}
string Person::getPhone(){
    return phone;
}
void Person::setPhone(string nPhone){
    phone=nPhone;
}
