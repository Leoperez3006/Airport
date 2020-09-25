#include "Fecha.h"
#include <iostream>
using namespace std;

Fecha::Fecha()
{
    //ctor
    day=01;
    month=01;
    year=2000;
}
Fecha::Fecha(int dia,int mes, int anio)
{
    day=dia;
    month=mes;
    year=anio;
}

int Fecha::getDay()
{
    return day;
}
int Fecha::getMonth()
{
    return month;
}
int Fecha::getYear()
{
    return year;
}
void Fecha::setDay(int dia)
{
    day=dia;
}
void Fecha::setMonth(int mes)
{
    month=mes;
}
void Fecha::setYear(int anio)
{
    year=anio;
}

void Fecha::printDate()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;

}
void Fecha::setDate(Fecha z)
{
    setDay(z.getDay());
    setMonth(z.getMonth());
    setYear(z.getYear());
}
Fecha::~Fecha()
{
    //dtor
}
