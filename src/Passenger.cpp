/** José Leonardo Pérez*/
/**29/11/19*/
#include "Passenger.h"
#include <iostream>
using namespace std;

Passenger::Passenger()
{
    //ctor
    name="Juanito Banana";
    phone= 0000000000;
    reserved=0;
}

Passenger::Passenger(string nombre, int telefono)
{
    name=nombre;
    phone=telefono;
    reserved=1;
}
string Passenger::getName()
{
    return name;
}
int Passenger::getPhone()
{
    return phone;
}
void Passenger::setName(string nombre)
{
    name=nombre;
}
void Passenger::setPhone(int numero)
{
    phone=numero;
}
void Passenger::imprimePasajero()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Phone:  "<<phone<<endl;

}
void Passenger::setReserved(int res)
{
    reserved=res;
}
int Passenger::getReserved()
{
    return reserved;
}
Passenger::~Passenger()
{
    //dtor
}
