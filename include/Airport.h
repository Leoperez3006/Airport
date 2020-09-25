#ifndef AIRPORT_H
#define AIRPORT_H
#include "Fecha.h"
#include "Airline.h"
#include <bits/stdc++.h>
using namespace std;
const int AIRLINES=3;

class Airport
{
    public:
        Airport();
        Airport(Fecha);
        Airport(int,Fecha,string,string,int,float,Airline[AIRLINES]);
        ////////////
        virtual ~Airport();
        /////////////////
        int getId();
        Fecha getDate();
        string getCity();
        string getCountry();
        int getTotalTransactions();
        float getTotalDailyTransactions();
        ////////////////////
        void setId(int);
        void setDate(Fecha);
        void setCity (string);
        void setCountry(string);
        void setTotalTransactions(int);
        void setTotalDailyTransactions(float);
        /////////////////////////////////
        void startOperations(Fecha);
        void printAllFlights(Fecha);
        void closeOperations();


    protected:

    private:
        int id;
        Fecha date;
        string city;
        string country;
        int totalTransactions;
        float totalDailyTransactions;
        Airline airlines[AIRLINES];


};

#endif // AIRPORT_H
