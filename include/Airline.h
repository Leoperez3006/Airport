#ifndef AIRLINE_H
#define AIRLINE_H
#include "Flight.h"
#include <bits/stdc++.h>
#include <string>
using namespace std;
const int FLIGHTS=5;


class Airline
{
    public:
        Airline();
        Airline(string,string,float,Flight[FLIGHTS]);
        virtual ~Airline();
        ///////////////////////////////////////
        string getBoardingCity();
        string getShortName();
        float getIncomes();
        Flight getFlights(int);
        //////////////////////////////////////
        void setBoardingCity(string);
        void setShortName(string);
        void setIncomes(float);
        void setFlights(Flight[FLIGHTS]);
        void updateAirline(Airline);
        void imprimeAerolinea();
        void scheduleFlight();
        void currentIncomes();
        void closeOperation();
        void printAllFlights();


    protected:

    private:
        string boardingCity;
        string shortName;
        float incomes;
        Flight flights[FLIGHTS];

};

#endif // AIRLINE_H
