#include "Hour.h"
#include <iostream>
/** José Leonardo Pérez*/
/**29/11/19*/
using namespace std;


Hour::Hour()
{
    hours=0;
    minutes=0;
}
Hour::Hour(int hora,int minuto)
{
    hours=hora;
    minutes=minuto;
}

    int Hour::getHour()
    {
        return hours;
    }
    int Hour::getMinute()
    {
        return minutes;
    }
    void Hour::setHour(int hora)
    {
        hours=hora;
    }
    void Hour::setMinute(int minutos)
    {
        minutes=minutos;
    }
    void Hour::printHour()
    {
        cout<<hours<<":"<<minutes<<endl;
    }
Hour::~Hour()
{
    //dtor
}
