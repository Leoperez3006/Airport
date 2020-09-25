#include "Airport.h"
#include <iostream>
#include "Passenger.h"
#include "flight.h"
#include "Fecha.h"
#include "Hour.h"
#include <bits/stdc++.h>
#include "Airline.h"
using namespace std;
Airport::Airport()
{
    //ctor
    id=000;
    date=date;
    city="CDMX";
    country="Mexico";
    totalTransactions=0;
    totalDailyTransactions=0;
}

Airport::Airport(Fecha)
{
    Airport aeropuerto [AIRLINES];
    Airline aerolinea[FLIGHTS];
    Flight vuelos[SEATS];
}

Airport::Airport(int ID,Fecha fecha,string ciudad,string pais ,int totalTrans,float dayTotalTrans,Airline[AIRLINES])
{
    id=ID;
    date=fecha;
    city=ciudad;
    country=pais;
    totalTransactions=totalTrans;
    totalDailyTransactions=dayTotalTrans;

}

//////////////////////////////////
int Airport::getId()
{
    return id;
}
Fecha Airport::getDate()
{
    return date;
}
string Airport::getCity()
{
    return city;
}
string Airport::getCountry()
{
    return country;
}
int Airport::getTotalTransactions()
{
    return totalTransactions;
}
float Airport::getTotalDailyTransactions()
{
    return totalDailyTransactions;
}
//////////////////////////////////
void Airport::setId(int ID)
{
    id=ID;
}
void Airport::setDate(Fecha DATE)
{
    date=DATE;
}
void Airport::setCity(string ciudad)
{
    city=ciudad;
}
void Airport::setCountry(string pais)
{
    country=pais;
}
void Airport::setTotalTransactions(int total)
{
    totalTransactions=total;
}
void  Airport::setTotalDailyTransactions(float total)
{
    totalDailyTransactions=total;
}
/////////////////////////////////////////////////////////////////

void Airport::startOperations(Fecha fecha)
{
    setDate(fecha);
    cout<<"Ingresa el id del vuelo"<<endl;
    int IDE;
    cin>>IDE;
    setId(IDE);
    cout<<"Ingresa la ciudad de operacion"<<endl;
    string ciudad,pais;
    cin>>ciudad;
    setCity(ciudad);
    cout<<"Ingresa el pais"<<endl;
    cin>>pais;
    setCountry(pais);
    for (int i=0;i<AIRLINES;i++)
    {
        airlines[i].setBoardingCity(pais);
        airlines[i].getFlights(i).setDate(fecha);
    }

}
void Airport::printAllFlights(Fecha date)
{
    for (int i=0; i<AIRLINES;i++)
    {

    }
}


Airport::~Airport()
{
    //dtor
}
