#ifndef FLIGHT_H
#define FLIGHT_H
#include "Fecha.h"
#include "Hour.h"
#include "Passenger.h"
#include "SalidaDestino.h"

/** José Leonardo Pérez*/
/**29/11/19*/

const int SEATS=4;

class Flight
{
    public:
        Flight();
        Flight(Fecha,Hour,float,string,SalidaDestino,float,int,float,Passenger[SEATS]);
        virtual ~Flight();
        /**Getters*/
        Fecha getDate();
        Hour getHour();
        float getPrice();
        string getAirplaneModel();
        SalidaDestino getFromTo();
        float getDistance();
        int getCrew();
        float getFuel();
        Passenger getSeats(Passenger[SEATS]);
        /**Setters*/
        void setDate(Fecha);
        void setHour(Hour);
        void setPrice(float);
        void setAirplaneModel(string);
        void setFromTO(SalidaDestino);
        void setDistance(float);
        void setCrew(int);
        void setFuel(float);
        void setPassenger(Passenger,int );
        void printFlight();
        void calculateFuel();
        void setSeats(Passenger,int);
        void setIndicador(int);
        int getIndicador();

    protected:

    private:
        Fecha date;
        Hour hour;
        float price;
        string airplaneModel;
        SalidaDestino fromTo;
        float distance;
        int crew;
        float fuel;
        Passenger seats[SEATS];
        int indicador;
};

#endif // FLIGHT_H
