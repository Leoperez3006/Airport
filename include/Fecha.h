#ifndef FECHA_H
#define FECHA_H
#include <iostream>
using namespace std;

class Fecha
{
    public:
        Fecha();
        Fecha(int,int,int);
        virtual ~Fecha();
        int getDay();
        int getMonth();
        int getYear();
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        void printDate();
        void setDate(Fecha);
        Fecha getDate();
    protected:

    private:
        int day;
        int month;
        int year;
};

#endif // FECHA_H
