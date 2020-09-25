#ifndef SALIDADESTINO_H
#define SALIDADESTINO_H
#include <bits/stdc++.h>
using namespace std;


class SalidaDestino
{
    public:
        SalidaDestino();
        SalidaDestino(string,string);
        string getFrom();
        string getTo();
        void setFrom(string);
        void setTo(string);
        void imprimeFromTo();

        virtual ~SalidaDestino();

    protected:

    private:
        string from;
        string to;
};

#endif // SALIDADESTINO_H
