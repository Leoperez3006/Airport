#ifndef FROMTO_H
#define FROMTO_H
#include <iostream>
using namespace std;



class FromTo
{
    public:
        FromTo();
        FromTo(string,string);
        string getFrom();
        string getTo();
        void setFrom(string);
        void setTo(string);


        virtual ~FromTo();

    protected:

    private:
        string from;
        string to;
};

#endif // FROMTO_H
