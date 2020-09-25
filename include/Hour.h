#ifndef HOUR_H
#define HOUR_H
#include <iostream>
/** José Leonardo Pérez*/
/**29/11/19*/
using namespace std;


class Hour
{
    public:
        Hour();
        Hour(int,int);
        virtual ~Hour();
        int getHour();
        int getMinute();
        void setHour(int);
        void setMinute(int);
        void printHour();

    protected:

    private:
        int hours;
        int minutes;
};

#endif // HOUR_H
