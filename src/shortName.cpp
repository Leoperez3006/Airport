#include "shortName.h"
#include <ctype.h>
using namespace std;

shortName::shortName()
{
    //ctor
    shortname="AMX";
}
shortName::shortName(string chorname)
{
    shortname=chorname;
}
void setShortName(string chorname)
{
    chorname=toupper(chorname);
    shortname=chorname;
}
string getShortName()
{
    return shortname;
}
shortName::~shortName()
{
    //dtor
}
