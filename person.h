#include <iostream>
#include <string>

using namespace std;
//encapsulamiento
class Person{
    private:
    string name;
    string address;
    string phone;

    public:

        Person();
        ~Person();
        string getName();
        void setName(string nName);
        string getAdress();
        void setAdress(string nAddress);
        string getPhone();
        void setPhone(string nPhone);
};
