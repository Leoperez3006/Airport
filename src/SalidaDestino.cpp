#include "SalidaDestino.h"
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

SalidaDestino::SalidaDestino()
{
    //ctor
    from="Mexico";
    to="USA";
}
SalidaDestino::SalidaDestino(string deDonde, string hacia)
{
    from=deDonde;
    to=hacia;
}
string SalidaDestino::getFrom()
{
    return from;
}
string SalidaDestino::getTo()
{
    return to;
}
void SalidaDestino::setFrom(string salidaa)
{
    from=salidaa;
}
void SalidaDestino::setTo(string para)
{
    to=para;
}
void SalidaDestino::imprimeFromTo()
{
    cout<<from<<endl;
    cout<<to<<endl;
}
SalidaDestino::~SalidaDestino()
{
    //dtor
}



