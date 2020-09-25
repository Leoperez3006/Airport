/** José Leonardo Pérez*/
/**29/11/19*/
#ifndef PASSENGER_H
#define PASSENGER_H
#include <iostream>
using namespace std;



class Passenger
{
    public:
        Passenger();
        Passenger(string, int);
        virtual ~Passenger();
        string getName();
        int getPhone();
        void setName(string);
        void setPhone(int);
        void imprimePasajero();
        void setReserved(int);
        int getReserved();


    protected:

    private:
        string name;
        int phone;
        int reserved;

};

#endif // PASSENGER_H
