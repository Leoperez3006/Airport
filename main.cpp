/** José Leonardo Pérez*/
/**29/11/19*/

#include <iostream>
#include "Passenger.h"
#include "flight.h"
#include "Fecha.h"
#include "Hour.h"
#include <bits/stdc++.h>
#include "Airline.h"

using namespace std;

int main()
{
Passenger Luis("Juanito" ,7771234567);
Luis.imprimePasajero();
Flight vuelo1;
vuelo1.calculateFuel();
vuelo1.printFlight();
Airline linea;
linea.imprimeAerolinea();
linea.scheduleFlight();
linea.currentIncomes();
p
    return 0;
}

