#include "Airline.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
Airline::Airline()
{
    //ctor

}

Airline::Airline(string city,string sName,float inc,Flight vuelos[FLIGHTS])
{
    boardingCity=city;
    shortName=sName;
    incomes=inc;
       for (int i=0; i<FLIGHTS; i++)
    {
        flights[i].setAirplaneModel(vuelos[i].getAirplaneModel());
        flights[i].setDate(vuelos[i].getDate());
        flights[i].setHour(vuelos[i].getHour());
        flights[i].setPrice(vuelos[i].getPrice());
        flights[i].setFromTO(vuelos[i].getFromTo());
        flights[i].setDistance(vuelos[i].getDistance());
        flights[i].setCrew(vuelos[i].getCrew());
        flights[i].setFuel(vuelos[i].getFuel());
        flights[i].calculateFuel();
    }

}
string Airline::getBoardingCity()
{
    return boardingCity;
}
string Airline::getShortName()
{
    return shortName;
}
float Airline::getIncomes()
{
    return incomes;
}
Flight Airline::getFlights(int position)
{

    return flights[position];
}
/////////////////////////////////////////////////////////
void Airline::setBoardingCity(string city)
{
    boardingCity=city;
}
void Airline::setShortName(string sName)
{
    shortName=sName;
}
void Airline::setIncomes(float ganancia)
{
    incomes=ganancia;
}
void Airline::setFlights(Flight vuleos[FLIGHTS])
{

    for (int i=0;i<FLIGHTS;i++)
    {
        flights[i].setAirplaneModel(vuleos[i].getAirplaneModel());
        flights[i].setPrice(vuleos[i].getPrice());
        flights[i].setDistance(vuleos[i].getDistance());
        flights[i].setCrew(vuleos[i].getCrew());
        flights[i].setFromTO(vuleos[i].getFromTo());
        flights[i].setFuel(vuleos[i].getFuel());
        flights[i].setDate(vuleos[i].getDate());
        flights[i].setHour(vuleos[i].getHour());
//
//       for (int n=0;n<SEATS;n++)
///**vuleos, ya tiene un arreglo de seats, por lo que quiero pasar ese arreglo de asientos en la posicion  i*/
//       {
////
//        Passenger x= vuleos.getSeats();
//// en este punto, x es mi arreglo de asientos o pasajeros, en el vuelo de la posicion i del arreglo vuleos
////Necesito meter los datos de ese arreglo en el arreglo de seats de un vuelo en flights
//        for (int y=1;y<SEATS;y++)
//        {
//
//        }
//        flights[n].setPassenger(x[n].getName());
//        seats[n].setPhone(x[n].getPhone());
//
//       }


    }
}
void Airline::updateAirline(Airline linea)
{
    string name, shortn;
    cout<<"Ingrese el shortname de la aerolinea"<<endl;
    cin>>shortn;
    cout<<"Ingrese el nombre de la aerolinea"<<endl;
    cin>>name;
    string ending=shortn+name;
    linea.setShortName(ending);
}

void Airline::imprimeAerolinea()
{
    cout<<"Boarding City:"<<boardingCity<<endl;
    cout<<"Short name: "<<shortName<<endl;
    cout<<"incomes: "<<incomes<<endl;
    cout<<"Flights: "<<endl;
    for (int i=0;i<FLIGHTS;i++)
    {
        cout<<"////////////////////////////////////////////////"<<endl;
        flights[i].printFlight();

    }
}

void Airline::scheduleFlight()
{

    for (int i=0;i<FLIGHTS;i++)
    {
       int x= flights[i].getIndicador();
        if (x==0)
        {
            cout<<"Espacio disponible"<<endl;
            flights[i].setIndicador(1);
            x=x+10;
            cout<<"shortname"<<endl;
            string sname,avion,dest,nombreee;
            cin>>sname;
            setShortName(sname);
            cout<<"Modelo del avion"<<endl;
            cin>>avion;
            flights[i].setAirplaneModel(avion);
            cout<<"Destino"<<endl;
            cin>>dest;
            SalidaDestino saldest (boardingCity,dest);
            flights[i].setFromTO(saldest);
            float distancia,prezio;
            cout<<"ingrese la distancia"<<endl;
            cin>>distancia;
            flights[i].setDistance(distancia);
            cout<<"indique la clave de la tripulacion"<<endl;
            int clave,hora,minu,asiento,phoneNum;
            cin>>clave;
            flights[i].setCrew(clave);
            cout<<"ingrese la hora"<<endl;
            cin>>hora;
            cout<<"ingrese el minuto"<<endl;
            cin>>minu;
            Hour horas(hora,minu);
            flights[i].setHour(horas);
            cout<<"indique el precio"<<endl;
            cin>>prezio;
            flights[i].setPrice(prezio);
            flights[i].printFlight();
            for (int i=0; i<SEATS;i++)
            {
            cout<<"Escoja su lugar(1-4)"<<endl;
            cin>>asiento;
            asiento=asiento-1;
            cout<<"ingrese su nombre"<<endl;
            cin>>nombreee;
            cout<<"ingrese su telefono"<<endl;
            cin>>phoneNum;
            Passenger pasajero(nombreee,phoneNum);
            cout<<"Desea continuar asignando pasajeros? si=0 no=1"<<endl;
              int respuesta;
            cin>>respuesta;
            if (respuesta==1)
            {
                break;
            }
            }
            cout<<"Desea continuarasignando vuelos? si=0 no=1"<<endl;
            int respuesta;
            cin>>respuesta;
            if (respuesta==1)
            {
                break;
            }
        }
        else
        {
            cout<<"Vuelos de la linea area "<<shortName<<" saturados"<<endl;
        }
    }
}

void Airline::currentIncomes()
{
    cout<<"Monto ganado hasta el momento"<<getIncomes()<<endl;
    int contador=0;
    float ganancia,ganancia2;

        for (int i=0;i<FLIGHTS;i++)
        {

            ganancia2=0;
            int cuenta=flights[i].getIndicador();
            if (cuenta>0)
            {
                contador=contador+1;
            }
        ganancia=contador*flights[i].getPrice();
        setIncomes(ganancia);
        ganancia2=ganancia2+ganancia;
        }
        cout<<"Asientos vendidos"<<contador<<endl;

       cout<<"ganancias :"<<ganancia2<<endl;
}

void Airline::closeOperation()
{
    cout<<getIncomes()<<endl;
}
void Airline::printAllFlights()
{
    for (int i=0;i<FLIGHTS;i++)
    {
        flights[i].printFlight();
    }
}
Airline::~Airline()
{
    //dtor
}
