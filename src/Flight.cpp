#include <iostream>
#include "Flight.h"
#include "Hour.h"
#include "Fecha.h"
#include "SalidaDestino.h"
using namespace std;
/** José Leonardo Pérez*/
/**29/11/19*/
Flight::Flight()
{


    date.setDay(01);
    date.setMonth(01);
    date.setYear(2010);
    hour.setHour(10);
    hour.setMinute(00);
    price=10000;
    airplaneModel="Boening 747";
    distance=45;
    crew=4;
    fuel=500.25;
    fromTo.setFrom("Mexico");
    fromTo.setTo("Canada");
    indicador=0;

}

Flight::Flight(Fecha fecha,Hour hora,float precio,string modelow,SalidaDestino fromto ,float distancia,int team,float gasolina, Passenger pas[SEATS])
{
    date =fecha;
    hour= hora;
    price= precio;
    airplaneModel=modelow;
    fromTo=fromto;
    distance=distancia;
    crew=team;
    fuel=gasolina;
    setIndicador(1);
    for (int i=0; i<SEATS; i++)
    {
        seats[i].setName(pas[i].getName());
        seats[i].setPhone(pas[i].getPhone());
    }
}
        Fecha Flight::getDate()
        {
            return date;
        }

        Hour Flight::getHour()
        {
            return hour;
        }
        float Flight::getPrice()
        {
            return price;
        }
        string Flight::getAirplaneModel()
        {
            return airplaneModel;
        }
        SalidaDestino Flight::getFromTo()
        {
            return fromTo;
        }
        float Flight::getDistance()
        {
            return distance;
        }
        int Flight::getCrew()
        {
            return crew;
        }
        float Flight::getFuel()
        {
            return fuel;
        }
        Passenger Flight::getSeats(Passenger pas[SEATS])
        {
            Passenger newOne;
        for (int i=0;i<SEATS;i++)
        {

            newOne.setName(pas[i].getName());
            newOne.setPhone(pas[i].getPhone());
           return newOne;
        }
        }

        /**Setters*/
        void Flight::setDate(Fecha fecha)
        {
            date=fecha;
        }
        void Flight::setHour(Hour hora)
        {
            hour=hora;
        }
        void Flight::setPrice(float precio)
        {
            price=precio;
        }
        void Flight::setAirplaneModel(string modelo)
        {
            airplaneModel=modelo;
        }
        void Flight::setFromTO(SalidaDestino fromto)
        {
            fromTo=fromto;
        }
        void Flight::setDistance(float distancia)
        {
            distance=distancia;
        }
        void Flight::setCrew(int cabina)
        {
            crew=cabina;
        }

        void Flight::setFuel(float gasolina)
        {
            fuel=gasolina;
        }
        void Flight::calculateFuel()
        {
            float x=getDistance();
            float litros = ((x*1200)/100);
            setFuel(litros);
            cout<<"La cantidad necesaria de combustible para desplazarse "<<x<<" kilometros, es de "<< litros<<" litros de gasolina"<<endl;
        }
        void Flight::printFlight()
        {
            cout<<"Fecha de vuelo: "<<date.getDay()<<"/"<<date.getMonth()<<"/"<<date.getYear()<<endl;
            cout<<"Hora de vuelo: "<<hour.getHour()<<":"<<hour.getMinute()<<endl;
            cout<<"Precio del vuelo: "<<price<<endl;
            cout<<"Modelo del avion: "<<airplaneModel<<endl;
            cout<<"Salida: "<<fromTo.getFrom()<<endl;
            cout<<"Llegada: "<<fromTo.getTo()<<endl;
            cout<<"Distancia: "<<distance<<endl;
            cout<<"Crew: "<<crew<<endl;
            cout<<"Fuel: "<<fuel<<endl;
            cout<<"LISTA DE PASAJEROS"<<endl;
            for (int i=0; i<SEATS; i++)
    {
        cout<<seats[i].getName()<<endl;
        cout<<seats[i].getPhone()<<endl;
//        if (reserved==0)
//        {
//            cout<<"Disponible"<<endl;
//        }
//        else
//        {
//            cout<<"Asiento ocupado"<<endl;
//        }
    }
        }
        void Flight::setPassenger(Passenger pasajero, int posicion)
        {
            seats[posicion].setName(pasajero.getName());
            seats[posicion].setPhone(pasajero.getPhone());

        }
void Flight::setIndicador(int ind)
{
    indicador=ind;
}
int Flight::getIndicador()
{
    return indicador;
}

Flight::~Flight()
{
    //dtor
}
