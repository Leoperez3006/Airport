#ifndef SHORTNAME_H
#define SHORTNAME_H
#include <string>
#include <ctype.h>
using namespace std;

class shortName
{
    public:
        shortName();
        shortName(string);

        virtual ~shortName();
        void setShortName(string);
        string getShortName();

    protected:

    private:
        string shortname;
};

#endif // SHORTNAME_H
