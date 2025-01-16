#include <iostream>
#include "lcd.h"
#include "dht.h"

using namespace std;

int main()
{
    LCD naytto;
    DHT sensori;

    naytto.print(naytto.floatToString(sensori.readTemperature()));;
    return 0;
}
