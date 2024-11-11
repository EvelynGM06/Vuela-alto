#include <iostream>
#include <string>

using namespace std;
class Shipment{
    private:
    string pickUpTime;
    Person sender;
    Person recipient;

    public: 
    string getpickUpTime();
    void setpickUpTime(string npickUpTime);
    Person getsender();
    void setsender(Person nsender);
    Person getrecipient();
    void setrecipient(Person nrecipient);
};
