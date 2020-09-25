#include "FromTo.h"
using namespace std;

FromTo::FromTo()
{
    //ctor
    from="CDMX";
    to="USA";
}


FromTo::FromTo(string de,string para)
{
    //ctor
    from=de;
    to=para;
}
string FromTo::getFrom()
{
    return from;
}
string FromTo::getTo()
{
    return to;
}
void FromTo::setFrom(string de)
{
    from=de;
}
void FromTo::setTo(string hacia)
{
    to=hacia;
}

FromTo::~FromTo()
{
    //dtor
}
