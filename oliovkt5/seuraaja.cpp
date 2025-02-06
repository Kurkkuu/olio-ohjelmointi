#include "seuraaja.h"

Seuraaja::Seuraaja(string a)
{
    nimi=a;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string b)
{
    cout<<b<<endl;
}
